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
	User(	const int			&userID,			const std::string	&displayName,
			const std::string	&password,			const std::string	&email,
			const std::string	&listOfCharacters,	const std::string	&ongoingCamps,
			const bool			&isDungeonMaster,	const std::string	&prefferences,
			const std::string	&friendList,		const std::string	&gameHistory);
//	Access Functions
//	Getters
	const int			getUserID()				{ return m_userID; }
	const std::string	getDisplayName()		{ return m_displayName; }
	const std::string	getPassword()			{ return m_password; }
	const std::string	getEmail()				{ return m_email; }
	const std::string	getListOfCharacters()	{ return m_listOfCharacters; }
	const std::string	getOngoingCamps()		{ return m_ongoingCamps; }
	const bool			getIsDungeonMaster()	{ return m_isDungeonMaster; }
	const std::string	getPrefferences()		{ return m_prefferences; }
	const std::string	getFriendList()			{ return m_friendList; }
	const std::string	getGameHistory()		{ return m_gameHistory; }

//	Setters
	void	setUserID(const int &userID)								{ m_userID = userID; }
	void	setDisplayName(const std::string &displayName)				{ m_displayName = displayName; }
	void	setPassword(const std::string &password)					{ m_password = password; }
	void	setEmail(const std::string &email)							{ m_email = email; }
	void	setListOfCharacters(const std::string &listOfCharacters)	{ m_listOfCharacters = listOfCharacters; }
	void	setOngoingCamps(const std::string &ongoingCamps)			{ m_ongoingCamps = ongoingCamps; }
	void	setIsDungeonMaster(const bool	&isDungeonMaster)			{ m_isDungeonMaster = isDungeonMaster; }
	void	setPrefferences(const std::string &prefferences)			{ m_prefferences = prefferences; }
	void	setFriendList(const  std::string &friendList)				{ m_friendList = friendList; }
	void	setGameHistory(const  std::string &gameHistory)				{ m_gameHistory = gameHistory; }
//	Others
};
