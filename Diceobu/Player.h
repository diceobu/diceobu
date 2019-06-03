/* This is the Player class header file.
 * It contains the definition of the Player
 * class along with it's Getters and Setters Functions.
 * It also contains the Player class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "User.h"
//	Standard Libraries
#include <string>

class Player : public User
{
//	Member Variables
public:
//	public Member Variables
protected:
//	protected Member Variables
private:
//	private Member Variables

//	Member Functions
public:
//	Constructors
	Player(	const int			&userID,			const std::string	&displayName,
			const std::string	&password,			const std::string	&email,
			const std::string	&listOfCharacters,	const std::string	&ongoingCamps,
			const bool			&isPlayer,			const std::string	&prefferences,
			const std::string	&friendList,		const std::string	&gameHistory);
//	Access Functions
//	Getters
//	Setters
//	Others
};
