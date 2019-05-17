/* This is the User class header file.
 * It contains the definition of the User
 * class along with it's Getters and Setters Functions.
 * It also contains the User class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class User
{
//	Member Variables
public:
//	public Member Variables
protected:
	int userID;
	std::string displayName;
	std::string password;
	std::string email;
	std::string listOfCharacters;
	std::string ongoingCamps;
	bool dm;
	std::string prefferences;
	std::string friendList;
	std::string gameHistory;
private:
//	private Member Variables

//	Member Functions
public:
//	Constructors
	User();
//	Access Functions
//	Getters
//	Setters
//	Others
};
