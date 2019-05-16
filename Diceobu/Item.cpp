/* This is the Item class source file.
 * It contains the definition of the
 * Item class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Item.h"
//	Standard Libraries
#include <string>

//	Constructors
Item::Item(const int			&statBonuses,	const std::string	&description,
		   const std::string	&rarity,		const int			&goldValue)
	:	m_statBonuses{ statBonuses },	m_description{ description },
		m_rarity{ rarity },				m_goldValue{ goldValue }
{}
//	Others
