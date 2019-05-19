/* This is the Character class source file.
 * It contains the definition of the
 * Character class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Entity.h"
#include "Character.h"
//	Standard Libraries
#include <string>

//	Constructors
Character::Character(	const std::string			&name,			const int	&hitPoints,
						const int					&overheal,		const int	&armorClass,
						const std::string			&size,			const int	&height,
						const int					&weight,		const int	&entityID,
						const std::pair<int, int>	&coordinates,
						const int			&abilityScores,	const std::string	&powers,
						const int			&speed,			const std::string	&cClass,		const std::string	&alignment,
						const std::string	&equipment,		const int			&level,			const int			&exp,
						const std::string	&race,			const std::string	&languages,		const int			&balance,
						const std::string	&background,	const std::string	&proficiency,	const int			&visionRange,
						const int			&reach)
	:	Entity(name, hitPoints, overheal, armorClass, size, height, weight, entityID, coordinates),
		m_abilityScores{ abilityScores },	m_powers{ powers },
		m_speed{ speed },					m_cClass{ cClass },				m_alignment{ alignment },
		m_equipment{ equipment },			m_level{ level },				m_exp{ exp },
		m_race{ race },						m_languages{ languages },		m_balance{ balance },
		m_background{ background },			m_proficiency{ proficiency },	m_visionRange{ visionRange },
		m_reach{ reach }
{}
//	Others
