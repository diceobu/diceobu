/* This is the Map class source file.
 * It contains the definition of the
 * Map class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Map.h"
#include "Tile.h"
#include "GameData.h"
#include "GlobalVariables.h"
//	Standard Libraries
#include <string>
#include <iostream>
#include <fstream>
#include <array>
#include <cstdlib>

//	Constructors
Map::Map(const std::string	&mapName,	const int			&sizeX,			const int	&sizeY,
		 const int			&mapID,		const std::string	&mapEffects)
	:	m_mapName{ mapName },	m_sizeX{ sizeX },			m_sizeY{sizeY},
		m_mapID{ mapID },		m_mapEffects{ mapEffects }
{
	if (readFromFile)
	{
		initializeMapTiles_File();
	}
	else
	{
		if (firstContCreated)
		{
			initTileDataCont();
			firstContCreated = false;
		}
		initializeMapTiles_Cont();
	}
}

//	Others
void Map::initializeMapTiles_File()
{
	std::ifstream inFile("map-terrain.dat");
	char tempChar;
	int i{ -1 };
	int j{ -1 };
	while (inFile >> std::noskipws >> tempChar) {
		if (tempChar == 'd')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "dirt", "none", true, false, -1);
		}
		else if (tempChar == 'g')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "grass", "none", true, false, -1);
		}
		else if (tempChar == 'r')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "rock", "none", true, false, -1);
		}
		else if (tempChar == 's')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "sand", "none", true, false, -1);
		}
		else if (tempChar == 'w')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "water", "none", true, false, -1);
		}
		else if (tempChar == ' ')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "none", "none", false, false, -1);
		}
		else if (tempChar == '#')
		{

		}
		else if (tempChar == '\n')
		{
			i++;
			j = -2;
		}
		else if (tempChar == '!')
		{
			break;
		}
		else
		{
			std::cout << "error: incorrect map file format";
			exit(1);
		}
		j++;
	}
}

void Map::initializeMapTiles_Cont()
{
	for (int i = 0; i < mapSize; i++)
	{
		for (int j = 0; j < mapSize; j++)
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, tileDataContainer[i][j].tld_terrainType,
				tileDataContainer[i][j].tld_tileEffects,
				tileDataContainer[i][j].tld_open,
				tileDataContainer[i][j].tld_occupied,
				tileDataContainer[i][j].tld_occupantID);
		}
	}
}

char Map::getTileSymbol(Tile &currTile)
{
	char tileSymbol{};
	if (currTile.getOpen())
	{
		if (currTile.getOccupied())
		{
			tileSymbol = 'x';
		}
		else
		{
			if (currTile.getTileEffects() == "none")
			{
				if (currTile.getTerrainType() == "dirt")		tileSymbol = 'd';
				else if (currTile.getTerrainType() == "grass")	tileSymbol = 'g';
				else if (currTile.getTerrainType() == "rock")	tileSymbol = 'r';
				else if (currTile.getTerrainType() == "sand")	tileSymbol = 's';
				else if (currTile.getTerrainType() == "water")	tileSymbol = 'w';
			}
			else if (currTile.getTileEffects() == "fire")		tileSymbol = 'f';
			else if (currTile.getTileEffects() == "ice")		tileSymbol = 'i';
		}
	}
	else
	{
		tileSymbol = ' ';
	}
	return tileSymbol;
}

char Map::getTerrainTileSymbol(Tile &currTile)
{
	char tileSymbol{};
	if (currTile.getOpen())
	{
		if (currTile.getTerrainType() == "dirt")		tileSymbol = 'd';
		else if (currTile.getTerrainType() == "grass")	tileSymbol = 'g';
		else if (currTile.getTerrainType() == "rock")	tileSymbol = 'r';
		else if (currTile.getTerrainType() == "sand")	tileSymbol = 's';
		else if (currTile.getTerrainType() == "water")	tileSymbol = 'w';
	}
	else
	{
		tileSymbol = ' ';
	}
	return tileSymbol;
}

void Map::writeTerrainMap()
{
	std::ofstream outFile("map-terrain.dat");

	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		outFile << '#';
		for (int j = 0; j < mapSize; j++)
		{
			outFile << getTerrainTileSymbol(*m_tileGrid[i][j]);
			if (j == 49)	outFile << '#' << '\n';
		}
	}
	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	outFile << "!Symbols: x = Entity, d = dirt, g = grass, r = rock, s = sand, w = water, f = fire, i = ice, a = acid, ' ' = closed tile";
}

void Map::writeMap()
{
	std::ofstream outFile("map-instance.dat");

	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		outFile << '#';
		for (int j = 0; j < mapSize; j++)
		{
			outFile << getTileSymbol(*m_tileGrid[i][j]);
			if (j == 49)	outFile << '#' << '\n';
		}
	}
	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	outFile << "!Symbols: x = Entity, d = dirt, g = grass, r = rock, s = sand, w = water, f = fire, i = ice, a = acid, ' ' = closed tile";
}

void Map::printMap()
{
	std::cout << '\n' << "Map: " << m_mapName
		<< '\t' << "MapID: " << m_mapID << '\n';
	printMapCharacters();
	for (int i = 0; i <= mapSize+1; i++) std::cout << '#';
	std::cout << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		std::cout << "#";
		for (int j = 0; j < mapSize; j++)
		{
			std::cout << getTileSymbol(*m_tileGrid[i][j]);
		}
		std::cout << "#";
		std::cout << '\n';
	}
	for (int i = 0; i <= mapSize + 1; i++) std::cout << '#';
}

void Map::printMapCharacters()
{
	if (m_containingCharacters.empty())
	{
		std::cout << "No characters reside in this map\n";
	}
	else
	{
		std::cout << "Characters with IDs: ";
		std::list <int> :: iterator iter;
		for (iter = m_containingCharacters.begin(); iter != m_containingCharacters.end(); iter++)
		{
			std::cout << *iter << ' ';
		}
		std::cout << "reside in this map\n";
	}
}