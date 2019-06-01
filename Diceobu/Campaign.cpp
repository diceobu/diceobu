/* This is the Campaign class source file.
 * It contains the definition of the
 * Campaign class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Campaign.h"
//	Standard Libraries
#include <string>

//	Constructors
Campaign::Campaign(const std::string	&name,			const int			&campaignID,
				   const int			&numOfMaps,		const std::string	&orderOfMaps,
				   const std::string	&description)
	:	m_name{ name },	m_campaignID{ campaignID },
		m_numOfMaps{ numOfMaps },				m_orderOfMaps{ orderOfMaps },
		m_description{ description }
{}
//	Others
