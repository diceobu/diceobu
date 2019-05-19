/* This is the Map class source file.
 * It contains the definition of the
 * Map class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Map.h"
#include "Tile.h"
#include "GameData.h"
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
	initializeMapTiles(m_mapName, m_tileIDCounter, m_tileGrid);
}
//	Others
void Map::initializeMapTiles(std::string	&mapName, int	&tileIDCounter, std::array<std::array<Tile, mapSize>, mapSize>	&tileGrid)
{
	initTileDataCont();
	std::cout << '\n' << "map: " << mapName << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		std::cout << "|";
		for (int j = 0; j < mapSize; j++)
		{
			tileGrid[i][j].setTileID(tileIDCounter++);
			tileGrid[i][j].setTerrainType(tileDataContainer[i][j].tld_terrainType);
			tileGrid[i][j].setTileEffects(tileDataContainer[i][j].tld_tileEffects);
			tileGrid[i][j].setOpen(tileDataContainer[i][j].tld_open);
			tileGrid[i][j].setOccupied(tileDataContainer[i][j].tld_occupied);
			tileGrid[i][j].setOccupantID(tileDataContainer[i][j].tld_occupantID);
			std::cout << tileGrid[i][j].getOpen() << '|';
		}
		std::cout << '\n';
	}
}
