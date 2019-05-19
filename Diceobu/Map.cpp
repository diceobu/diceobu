/* This is the Map class source file.
 * It contains the definition of the
 * Map class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Map.h"
#include "Tile.h"
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
	initializeMapTiles(m_tileIDCounter, m_tileGrid);
}
//	Others
void Map::initializeMapTiles(int	&tileIDCounter, std::array<std::array<Tile, 20>, 20>	&tileGrid)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			tileGrid[i][j].setTileID(tileIDCounter++);
			tileGrid[i][j].setTerrainType();
			tileGrid[i][j].setTileEffects();
			tileGrid[i][j].setOpen();
			tileGrid[i][j].setOccupied();
			tileGrid[i][j].setOccupantID();
			std::cout << tileGrid[i][j].getTileID() << '\t';
		}
		std::cout << '\n';
	}
}
