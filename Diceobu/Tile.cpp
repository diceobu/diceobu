/* This is the Map class source file.
 * It contains the definition of the
 * Map class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Tile.h"
//	Standard Libraries
#include <string>

//	Constructors
Tile::Tile(const int			&tileID,		const std::string	&terrainType,
		   const std::string	&tileEffects,	const bool			&open)
	:	m_tileID{ tileID },				m_terrainType{ terrainType },
		m_tileEffects{ tileEffects },	m_open{ open }
{}
//	Others
