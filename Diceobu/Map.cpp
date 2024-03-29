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
#include "mapcreatewindow.h"
//	Standard Libraries
#include <string>
#include <iostream>
#include <fstream>
#include <array>
#include <cstdlib>
#include <iterator>
#include <mainDependancies.h>
#include <Character.h>
#include <QDebug>
#include <list>

//	Constructors
Map::Map(const std::string	&mapName,	const int			&sizeX,			const int	&sizeY,
		 const int			&mapID,		const std::string	&mapEffects)
	:	m_mapName{ mapName },	m_sizeX{ sizeX },			m_sizeY{sizeY},
		m_mapID{ mapID },		m_mapEffects{ mapEffects }
{
	if (readFromFile)
	{
		initializeMapTiles_File();
        // qDebug() << "in map.cpp - CREATING MAP";
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
    std::ifstream inFile(mapFilepath);
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
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "rock", "none", false, false, -1);
		}
		else if (tempChar == 's')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "sand", "none", true, false, -1);
		}
		else if (tempChar == 'w')
		{
            m_tileGrid[i][j] = new Tile(tileIDCounter++, "water", "none", false, false, -1);
		}
		else if (tempChar == '$')
		{
			m_tileGrid[i][j] = new Tile(tileIDCounter++, "soulsand", "none", true, false, -1);
		}
        else if (tempChar == 'f')
        {
            m_tileGrid[i][j] = new Tile(tileIDCounter++, "floor", "none", true, false, -1);
        }
		//else if (tempChar == 'r')
		//{
		//	m_tileGrid[i][j] = new Tile(tileIDCounter++, "rock", "none", true, false, -1);
		//}
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
            //std::cout << "error: incorrect map file format";
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

	std::string currTileTerrainType = currTile.getTerrainType();
	std::string currTileEffects = currTile.getTileEffects();

	if (currTileTerrainType == "dirt")
	{
		tileSymbol = 'd';

		if (currTileEffects == "fire") tileSymbol = '1';
		else if (currTileEffects == "ice") tileSymbol = '+';
	}
	else if (currTileTerrainType == "grass")
	{
		tileSymbol = 'g';

		if (currTileEffects == "fire") tileSymbol = '2';
		else if (currTileEffects == "ice") tileSymbol = '_';
	}
	else if (currTileTerrainType == "rock")
	{
		tileSymbol = 'r';
	}
	else if (currTileTerrainType == "sand")
	{
		tileSymbol = 's';

		if (currTileEffects == "fire") tileSymbol = '4';
		else if (currTileEffects == "ice") tileSymbol = '(';
	}
	else if (currTileTerrainType == "water")
	{
		tileSymbol = 'w';

		if (currTileEffects == "ice") tileSymbol = '*';
	}
	else if (currTileTerrainType == "soulsand")
	{
		tileSymbol = '$';

		if (currTileEffects == "fire") tileSymbol = '6';
		else if (currTileEffects == "ice") tileSymbol = '&';
	}
	else if (currTileTerrainType == "floor")
	{
		tileSymbol = 'f';

		if (currTileEffects == "fire") tileSymbol = '7';
		else if (currTileEffects == "ice") tileSymbol = '^';
	}
	else if (currTileTerrainType == "none")
	{
		tileSymbol = ' ';
	}

    if (currTile.getOccupied())
    {
        Character* currCharacter;
        int occuID;
        std::string currClass;
        std::list <Character*> :: iterator iter;
        std::list <Character*> tempCharList;
        tempCharList = getActiveCharacters();

        for (iter = tempCharList.begin(); iter != tempCharList.end(); iter++)
        {
            currCharacter = *iter;
            occuID = currTile.getOccupantID();
            if (currCharacter->getEntityID() == occuID)
            {
                currClass = currCharacter->getCClass();
                break;
            }
        }
        if (currClass == "Wizard")
        {
            tileSymbol = 'W';
        }
        else if (currClass == "Fighter")
        {
            tileSymbol = 'F';
        }
        else if (currClass == "Rogue")
        {
            tileSymbol = 'R';
        }
        else if (currClass == "Ranger")
        {
            tileSymbol = 'B'; // Bow LOL
        }
    }
    return tileSymbol;
}


//    if (currTile.getOpen())
//	{
//		if (currTile.getOccupied())
//        {
//            Character* currChar;
//            std::string currClass = "Wizard";
//            int occuID = -1 ;
////            tileSymbol = 'x';
//           // if (currTile.getOccupantID())
//            qDebug() << "Occupied by ID:" << QString::number(currTile.getOccupantID());
//            std::list <Character*> :: iterator iter;
//            //for (iter = getActiveCharacters().begin(); iter != getActiveCharacters().end(); iter++)
//            //{
//            //    currChar = *iter;
//            //    occuID = currTile.getOccupantID();
//            //    if (currChar->getEntityID() == occuID)
//            //    {
//            //        currClass = currChar->getCClass();
//            //        qDebug() << "Map128 ID is" << QString::number(currChar->getEntityID()) << QString::number(occuID) << "Class is " << QString::fromStdString(currClass);
//            //    }
//            //}

//            qDebug() << "Map139 ID is" << QString::number(currChar->getEntityID()) << QString::number(occuID) << "Class is " << QString::fromStdString(currClass);

//            if (currClass == "Wizard")
//            {
//                tileSymbol = 'W';
//            }
//            else if (currClass == "Fighter")
//            {
//                tileSymbol = 'F';
//            }
//            else if (currClass == "Rogue")
//            {
//                tileSymbol = 'R';
//            }
//            else if (currClass == "Ranger")
//            {
//                tileSymbol = 'B'; // Bow LOL
//            }
//            qDebug() << "Map148";
//        }
//		else
//		{
//            qDebug() << "map179" << QString::fromStdString(mapName) << QString::fromStdString(mapFilepath);

//			if (currTile.getTileEffects() == "none")
//			{
//				if      (currTile.getTerrainType() == "dirt")		tileSymbol = 'd';
//				else if (currTile.getTerrainType() == "grass")		tileSymbol = 'g';
//				else if (currTile.getTerrainType() == "rock")		tileSymbol = 'r';
//				else if (currTile.getTerrainType() == "sand")		tileSymbol = 's';
//				else if (currTile.getTerrainType() == "water")		tileSymbol = 'w';
//				else if (currTile.getTerrainType() == "soulsand")	tileSymbol = '$';

//			}
//			else if (currTile.getTileEffects() == "fire")		tileSymbol = 'f';
//			else if (currTile.getTileEffects() == "ice")		tileSymbol = 'i';
//		}
//	}
//	else
//	{
//		tileSymbol = ' ';
//	}
//     //qDebug() << "map 140 GTSS///";

//	return tileSymbol;
//}

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
		else if (currTile.getTerrainType() == "soulsand")	tileSymbol = '$';

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
    // qDebug() << "map 182///";

	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		outFile << '#';
		for (int j = 0; j < mapSize; j++)
		{
            // qDebug() << "map 191///"<< i << j;
			outFile << getTileSymbol(*m_tileGrid[i][j]);
            if (j == mapSize - 1)	outFile << '#' << '\n';
		}
	}
	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
    // qDebug() << "map 196///";

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
	std::cout << '\n';
	writeMap();
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
