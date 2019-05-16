/* This is the Weapon class source file.
 * It contains the definition of the
 * Weapon class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Weapon.h"
#include "Equipment.h"
//	Standard Libraries
#include <string>

//	Constructors
Weapon::Weapon(const int			&statBonuses,	const std::string	&description,
			   const std::string	&rarity,		const int			&goldValue,
			   const std::string	&classReq,		const int			&levelReq,
			   const std::string	&passiveEffect,	const int			&damage)
	:	Equipment(statBonuses, description, rarity, goldValue, classReq, levelReq, passiveEffect),
		m_damage{ damage }
{}
//	Others
