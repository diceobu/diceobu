/* This is the User class source file.
 * It contains the definition of the
 * User class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "User.h"
//	Standard Libraries
#include <string>

//	Constructors
User::User(	const int			&userID,			const std::string	&displayName,
			const std::string	&password,			const std::string	&email,
			const std::string	&listOfCharacters,	const std::string	&ongoingCamps,
			const bool			&isDungeonMaster,	const std::string	&prefferences,
			const std::string	&friendList,		const std::string	&gameHistory)
	:	m_userID{ userID },						m_displayName{ displayName },
		m_password{ password },					m_email{ email },
		m_listOfCharacters{ listOfCharacters },	m_ongoingCamps{ ongoingCamps },
		m_isDungeonMaster{ isDungeonMaster },	m_prefferences{ prefferences },
		m_friendList{ friendList },				m_gameHistory{ gameHistory }
{}
//	Others
