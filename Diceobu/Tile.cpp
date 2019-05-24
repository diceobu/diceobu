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
Tile::Tile(	const int			&tileID,		const std::string	&terrainType,
			const std::string	&tileEffects,	const bool			&open,
			const bool			&occupied,		const int			&occupantID)
	:	m_tileID{ tileID },				m_terrainType{ terrainType },
		m_tileEffects{ tileEffects },	m_open{ open },
		m_occupied{ occupied },			m_occupantID{ occupantID }
{}
//	Others
