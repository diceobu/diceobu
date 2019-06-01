/* This is the PC class header file.
 * It contains the definition of the PC
 * class along with it's Getters and Setters Functions.
 * It also contains the PC class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Character.h"
//	Standard Libraries
#include <string>

class PC : public Character
{
	//	Member Variables
public:
	//	public Member Variables
protected:
	int		m_userID;
	int		m_inventory;
	bool	m_inspiration;
	int		m_expenses;
private:
	//	private Member Variables

	//	Member Functions
public:
	//	Constructors
	PC(	const std::string	&name,			const std::string	&gender,
		const int			&maxHitPoints,	const int			&currHitPoints,
		const int			&overheal,		const int			&armorClass,
		const std::string	&size,			const int			&height,
		const int			&weight,		const int			&entityID,
		const std::pair<int, int>			&coordinates, Map*	&currMap,
		const int			&abilityScores,	const std::list<std::string>	&powers,
		const int			&speed,			const std::string	&cClass,		const std::string	&alignment,
		const std::string	&equipment,		const int			&level,			const int			&exp,
		const std::string	&race,			const std::string	&languages,		const int			&balance,
		const std::string	&background,	const std::string	&proficiency,	const int			&visionRange,
		const int			&reach,
		const int			&userID,		const int			&inventory,		const bool			&inspiration,
		const int			&expenses);
	//	Access Functions
	//	Getters
	const int	getUserID()			{ return m_userID; }
	const int	getInventory()		{ return m_inventory; }
	const bool	getInspiration()	{ return m_inspiration; }
	const int	getExpenses()		{ return m_expenses; }
	//	Setters
	void setUserID(const int &userID)				{ m_userID = userID; }
	void setInventory(const int &inventory)			{ m_inventory = inventory; }
	void setInspiration(const bool &inspiration)	{ m_inspiration = inspiration; }
	void setExpenses(const int &expenses)			{ m_expenses = expenses; }
	//	Others
};
