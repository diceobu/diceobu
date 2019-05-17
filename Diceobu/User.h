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
	int			m_userID;
	std::string m_displayName;
	std::string m_password;
	std::string m_email;
	std::string m_listOfCharacters;
	std::string m_ongoingCamps;
	bool		m_isDungeonMaster;
	std::string m_prefferences;
	std::string m_friendList;
	std::string m_gameHistory;
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
