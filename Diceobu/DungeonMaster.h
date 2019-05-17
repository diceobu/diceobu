/* This is the DungeonMaster class header file.
 * It contains the definition of the DungeonMaster
 * class along with it's Getters and Setters Functions.
 * It also contains the DungeonMaster class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "User.h"
//	Standard Libraries
#include <string>

class DungeonMaster
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
	DungeonMaster(	const int			&userID,			const std::string	&displayName,
					const std::string	&password,			const std::string	&email,
					const std::string	&listOfCharacters,	const std::string	&ongoingCamps,
					const bool			&isDungeonMaster,	const std::string	&prefferences,
					const std::string	&friendList,		const std::string	&gameHistory);
//	Access Functions
//	Getters
//	Setters
//	Others
};
