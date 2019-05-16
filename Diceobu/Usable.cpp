/* This is the Usable class source file.
 * It contains the definition of the
 * Usable class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Usable.h"
#include "Item.h"
//	Standard Libraries
#include <string>

//	Constructors
Usable::Usable(const int			&statBonuses,	const std::string	&description,
			   const std::string	&rarity,		const int			&goldValue,
			   const int			&remainingUses,	const std::string	&classReq,
			   const int			&levelReq)
	:	Item(statBonuses, description, rarity, goldValue),
		m_remainingUses{ remainingUses },	m_classReq{ classReq },
		m_levelReq{ levelReq }
{}
//	Others
