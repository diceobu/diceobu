/* This is the Map class source file.
 * It contains the definition of the
 * Map class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Map.h"
//	Standard Libraries
#include <string>

//	Constructors
Map::Map(const std::string	&mapName,	const int			&size,
		 const int			&mapID,		const std::string	&mapEffects)
	:	m_mapName{ mapName },	m_size{ size },
		m_mapID{ mapID },		m_mapEffects{ mapEffects }
{}
Map::Map(const std::string &mapName, const int &size, const int &mapID)
	:	m_mapName{ mapName },	m_size{ size },
		m_mapID{ mapID }
{}
//	Others
