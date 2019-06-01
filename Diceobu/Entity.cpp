/* This is the Entity class source file.
 * It contains the definition of the
 * Entity class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Entity.h"
#include "Map.h"
#include "mainDependancies.h"
//	Standard Libraries
#include <string>
#include <utility>

//	Constructors
Entity::Entity(	const std::string			&name,			
				const int					&maxHitPoints,	const int	&currHitPoints,
				const int					&overheal,		const int	&armorClass,
				const std::string			&size,			const int	&height,
				const int					&weight,		const int	&entityID,
				const std::pair<int, int>	&coordinates,	Map*		&currMap)
	:	m_name{ name },					
		m_maxHitPoints{ maxHitPoints }, m_currHitPoints{ currHitPoints },
		m_overheal{ overheal },			m_armorClass{ armorClass },
		m_size{ size },					m_height{ height },
		m_weight{ weight },				m_entityID{ entityID },
		m_coordinates{ coordinates },	m_currMap{ currMap }
{
	currMap->m_tileGrid[coordinates.first][coordinates.second]->setOccupied(true);
	currMap->m_tileGrid[coordinates.first][coordinates.second]->setOccupantID(m_entityID);
}
//	Others
void Entity::changeEntityPosition(Map* &currMap, Map* &targetMap, const std::pair<int, int> &coordinates)
{
	currMap->m_tileGrid[m_coordinates.first][m_coordinates.second]->setOccupied(false);
	currMap->m_tileGrid[m_coordinates.first][m_coordinates.second]->setOccupantID(-1);
	currMap->m_containingCharacters.remove(currWorkingChar->getEntityID());

	setCoordinates(coordinates);

	targetMap->m_tileGrid[coordinates.first][coordinates.second]->setOccupied(true);
	targetMap->m_tileGrid[coordinates.first][coordinates.second]->setOccupantID(m_entityID);
	targetMap->m_containingCharacters.push_back(currWorkingChar->getEntityID());

}
