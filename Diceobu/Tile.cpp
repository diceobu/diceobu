/* This is the Map class source file.
 * It contains the definition of the
 * Map class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Tile.h"
#include "Map.h"
//	Standard Libraries
#include <string>

//	Constructors
Tile::Tile(const std::string	&mapName,		const int			&size,
		   const int			&mapID,
		   const int			&tileID,		const std::string	&terrainType,
		   const std::string	&tileEffects,	const bool			&open)
	:	Map(mapName, size, mapID),
		m_tileID{ tileID },				m_terrainType{ terrainType },
		m_tileEffects{ tileEffects },	m_open{ open }
{}
//	Others
