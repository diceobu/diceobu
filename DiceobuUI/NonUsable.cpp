/* This is the NonUsable class source file.
 * It contains the definition of the
 * NonUsable class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "NonUsable.h"
#include "Item.h"
//	Standard Libraries
#include <string>

//	Constructors
NonUsable::NonUsable(const int			&statBonuses,	const std::string	&description,
					 const std::string	&rarity,		const int			&goldValue,
					 const std::string	&passiveEffect, const int			&remDuration)
	:	Item(statBonuses, description, rarity, goldValue),
		m_passiveEffect{ passiveEffect }, m_remDuration{ remDuration }
{}
//	Others
