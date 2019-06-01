/* This is the Player class source file.
 * It contains the definition of the
 * Player class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Player.h"
#include "User.h"
//	Standard Libraries
#include <string>

//	Constructors
Player::Player(	const int			&userID,			const std::string	&displayName,
				const std::string	&password,			const std::string	&email,
				const std::string	&listOfCharacters,	const std::string	&ongoingCamps,
				const bool			&isPlayer,			const std::string	&prefferences,
				const std::string	&friendList,		const std::string	&gameHistory)
	: User(userID, displayName, password, email, listOfCharacters, ongoingCamps, isPlayer, prefferences, friendList, gameHistory)
{}
//	Others
