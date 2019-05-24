/* This is the Entity class source file.
 * It contains the definition of the
 * Entity class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Entity.h"
#include "Map.h"
//	Standard Libraries
#include <string>
#include <utility>

//	Constructors
Entity::Entity(	const std::string			&name,			const int	&hitPoints,
				const int					&overheal,		const int	&armorClass,
				const std::string			&size,			const int	&height,
				const int					&weight,		const int	&entityID,
				const std::pair<int, int>	&coordinates,	Map*		&currMap)
	:	m_name{ name },					m_hitPoints{ hitPoints },
		m_overheal{ overheal },			m_armorClass{ armorClass },
		m_size{ size },					m_height{ height },
		m_weight{ weight },				m_entityID{ entityID },
		m_coordinates{ coordinates },	m_currMap{ currMap }
{
	changeEntityPosition(m_currMap, m_coordinates);
}
//	Others
void Entity::changeEntityPosition(Map* &currMap, const std::pair<int, int> &coordinates)
{
	currMap->m_tileGrid[m_coordinates.first][m_coordinates.second]->setOccupied(false);
	currMap->m_tileGrid[m_coordinates.first][m_coordinates.second]->setOccupantID(-1);
	setCoordinates(coordinates);
	currMap->m_tileGrid[coordinates.first][coordinates.second]->setOccupied(true);
	currMap->m_tileGrid[coordinates.first][coordinates.second]->setOccupantID(m_entityID);
}
