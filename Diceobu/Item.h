/* This is the Item class header file.
 * It contains the definition of the Item
 * class along with it's Getters and Setters Functions.
 * It also contains the Item class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class Item
{
//	Member Variables
protected:
	int			m_statBonuses;
	std::string m_description;
	std::string m_rarity;
	int			m_goldValue;
//	Member Functions
public:
//	Constructors
	Item(const int			&statBonuses,	const std::string	&description,
		 const std::string	&rarity,		const int			&goldValue);
//	Access Functions
//	Getters
	const int		  getStatBonuses() { return m_statBonuses; }
	const std::string getDescription() { return m_description; }
	const std::string getRarity()	   { return m_rarity; }
	const int		  getGoldValue()   { return m_goldValue; }
//	Setters
	void setStatBonuses(const int &statBonuses)			{ m_statBonuses = statBonuses; }
	void setDescription(const std::string &description)	{ m_description = description; }
	void setRarity(const std::string &rarity)			{ m_rarity = rarity; }
	void setGoldValue(const int &goldValue)				{ m_goldValue = goldValue; }
//	Others
};
