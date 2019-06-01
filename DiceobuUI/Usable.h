/* This is the Usable class header file.
 * It contains the definition of the Usable
 * class along with it's Getters and Setters Functions.
 * It also contains the Usable class constructor declarations
 * and the declaration of other Functions.
 * Usable inherits from Item.
 */

#pragma once

//	User Libraries
#include "Item.h"
//	Standard Libraries
#include <string>

class Usable : public Item
{
//	Member Variables
private:
	int			m_remainingUses;
	std::string m_classReq;
	int			m_levelReq;
//	Member Functions
public:
//	Constructors
	Usable(const int			&statBonuses,	const std::string	&description,
		   const std::string	&rarity,		const int			&goldValue,
		   const int			&remainingUses,	const std::string	&classReq,
		   const int			&levelReq);
//	Access Functions
//	Getters
	const int		  getRemainingUses() { return m_remainingUses; }
	const std::string getClassReq() { return m_classReq; }
	const int		  getLevelReq()	   { return m_levelReq; }
//	Setters
	void setRemainingUses(const int &remainingUses)	{ m_remainingUses = remainingUses; }
	void setClassReq(const std::string &classReq)	{ m_classReq = classReq; }
	void setLevelReq(const int &levelReq)			{ m_levelReq = levelReq; }
//	Others
};
