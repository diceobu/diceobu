/* This is the NPC class source file.
 * It contains the definition of the
 * NPC class Constructor and other
 * Member Functions.
 */

 //	User Libraries
#include "Character.h"
#include "NPC.h"
//	Standard Libraries
#include <string>

//	Constructors
NPC::NPC(const std::string	&name,			const int			&hitPoints,
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
		 const std::string	&dialogTable,	const std::string	&itemList,		const std::string	&questList)
	:	Character(name, hitPoints, overheal, armorClass, size, height, weight, coordinates, entityID, abilityScores, powers,
		speed, cClass, alignment, equipment, level, exp, race, languages, balance, background, proficiency, visionRange, reach),
		m_dialogTable{ dialogTable }, m_itemList{ itemList }, m_questList{ questList }
{}
//	Others
