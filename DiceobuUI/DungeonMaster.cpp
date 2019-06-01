/* This is the DungeonMaster class source file.
 * It contains the definition of the
 * DungeonMaster class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "DungeonMaster.h"
#include "User.h"
//	Standard Libraries
#include <string>

//	Constructors
DungeonMaster::DungeonMaster(	const int			&userID,			const std::string	&displayName,
								const std::string	&password,			const std::string	&email,
								const std::string	&listOfCharacters,	const std::string	&ongoingCamps,
								const bool			&isDungeonMaster,	const std::string	&prefferences,
								const std::string	&friendList,		const std::string	&gameHistory)
	:	User(userID, displayName, password, email, listOfCharacters, ongoingCamps, isDungeonMaster, prefferences, friendList, gameHistory)
{}
//	Others
