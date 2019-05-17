/* This is the PC class source file.
 * It contains the definition of the
 * PC class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Character.h"
#include "PC.h"
//	Standard Libraries
#include <string>

//	Constructors
PC::PC(const std::string	&name,			const int			&hitPoints,
	   const int			&overheal,		const int			&armorClass,
	   const std::string	&size,			const int			&height,
	   const int			&weight,		const int			&coordinates,
	   const int			&entityID,
	   const int			&abilityScores,	const std::string	&powers,
	   const int			&speed,			const std::string	&cClass,		const std::string	&alignment,
	   const std::string	&equipment,		const int			&level,			const int			&exp,
	   const std::string	&race,			const std::string	&languages,		const int			&balance,
	   const std::string	&background,	const std::string	&proficiency,	const int			&visionRange,
	   const int			&reach,
	   const int			&userID,		const int			&inventory,		const bool			&inspiration,
	   const int			&expenses)
	: Character(name, hitPoints, overheal, armorClass, size, height, weight, coordinates, entityID, abilityScores, powers,
		speed, cClass, alignment, equipment, level, exp, race, languages, balance, background, proficiency, visionRange, reach),
	m_userID{ userID }, m_inventory{ inventory }, m_inspiration{ inspiration }, m_expenses{ expenses }
{}
//	Others
