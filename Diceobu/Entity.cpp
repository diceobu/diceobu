/* This is the Entity class source file.
 * It contains the definition of the
 * Entity class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Entity.h"
//	Standard Libraries
#include <string>
#include <utility>

//	Constructors
Entity::Entity(	const std::string			&name,			const int	&hitPoints,
				const int					&overheal,		const int	&armorClass,
				const std::string			&size,			const int	&height,
				const int					&weight,		const int	&entityID,
				const std::pair<int, int>	&coordinates)
	:	m_name{ name },			m_hitPoints{ hitPoints },
		m_overheal{ overheal },	m_armorClass{ armorClass },
		m_size{ size },			m_height{ height },
		m_weight{ weight },		m_entityID{ entityID },
		m_coordinates{ coordinates }
{}
//	Others
void Entity::changeEntityPosition(const std::pair<int, int> &coordinates)
{
	/*tileGrid[coordinates.first][coordinates.second].tld_occupied = false;
	tileGrid[coordinates.first][coordinates.second].tld_occupantID = -1;*/
	setCoordinates(coordinates);

}
