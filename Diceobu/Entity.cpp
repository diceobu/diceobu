/* This is the Entity class source file.
 * It contains the definition of the
 * Entity class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Entity.h"
//	Standard Libraries
#include <string>

//	Constructors
Entity::Entity(const std::string	&name,		const int	&hitPoints,
			   const int			&overheal,	const int	&armorClass,
			   const std::string	&size,		const int	&height,
			   const int			&weight,	const int	&coordinates,
			   const int			&entityID)
	:	m_name{ name },			m_hitPoints{ hitPoints },
		m_overheal{ overheal },	m_armorClass{ armorClass },
		m_size{ size },			m_height{ height },
		m_weight{ weight },		m_coordinates{ coordinates },
		m_entityID{ entityID }
{}
//	Others
