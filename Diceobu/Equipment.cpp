/* This is the Equipment class source file.
 * It contains the definition of the
 * Equipment class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Equipment.h"
#include "Item.h"
//	Standard Libraries
#include <string>

//	Constructors
Equipment::Equipment(const int			&statBonuses,	const std::string	&description,
					 const std::string	&rarity,		const int			&goldValue,
					 const std::string	&classReq,		const int			&levelReq,
					 const std::string	&passiveEffect)
	:	Item(statBonuses, description, rarity, goldValue),
		m_classReq{ classReq },	m_levelReq{ levelReq },
		m_passiveEffect{ passiveEffect }
{}
//	Others
