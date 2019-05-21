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
#include <array>

//	Constructors
Map::Map(const std::string	&mapName,	const int			&sizeX,			const int	&sizeY,
		 const int			&mapID,		const std::string	&mapEffects)
	:	m_mapName{ mapName },	m_sizeX{ sizeX },			m_sizeY{sizeY},
		m_mapID{ mapID },		m_mapEffects{ mapEffects }
{
	initializeMapTiles();
}
//	Others
void Map::initializeMapTiles()
{
	initTileDataCont();
	for (int i = 0; i < mapSize; i++)
	{
		for (int j = 0; j < mapSize; j++)
		{
			m_tileGrid[i][j].setTileID(m_tileIDCounter++);
			m_tileGrid[i][j].setTerrainType(tileDataContainer[i][j].tld_terrainType);
			m_tileGrid[i][j].setTileEffects(tileDataContainer[i][j].tld_tileEffects);
			m_tileGrid[i][j].setOpen(tileDataContainer[i][j].tld_open);
			m_tileGrid[i][j].setOccupied(tileDataContainer[i][j].tld_occupied);
			m_tileGrid[i][j].setOccupantID(tileDataContainer[i][j].tld_occupantID);
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
				if (currTile.getTerrainType() == "dirt")		tileSymbol = '~';
				else if (currTile.getTerrainType() == "stone")	tileSymbol = 'O';
			}
			else if (currTile.getTileEffects() == "fire")		tileSymbol = '@';
			else if (currTile.getTileEffects() == "ice")		tileSymbol = '*';
		}
	}
	else
	{
		tileSymbol = ' ';
	}
	return tileSymbol;
}

void Map::printMap()
{
	std::cout << '\n' << "Map: " << m_mapName
		<< '\t' << "MapID: " << m_mapID << '\n';
	for (int i = 0; i <= mapSize+1; i++) std::cout << '#';
	std::cout << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		std::cout << "#";
		for (int j = 0; j < mapSize; j++)
		{
			std::cout << getTileSymbol(m_tileGrid[i][j]);
		}
		std::cout << "#";
		std::cout << '\n';
	}
	for (int i = 0; i <= mapSize + 1; i++) std::cout << '#';
}
