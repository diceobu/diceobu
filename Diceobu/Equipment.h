/* This is the Equipment class header file.
 * It contains the definition of the Equipment
 * class along with it's Getters and Setters Functions.
 * It also contains the Equipment class constructor declarations
 * and the declaration of other Functions.
 * Equipment inherits from Item.
 */

#pragma once

//	User Libraries
#include "Item.h"
//	Standard Libraries
#include <string>

class Equipment : public Item
{
//	Member Variables
private:
	std::string m_classReq;
	int			m_levelReq;
	std::string	m_passiveEffect;
//	Member Functions
public:
//	Constructors
	Equipment(const int			&statBonuses,	const std::string	&description,
			  const std::string	&rarity,		const int			&goldValue,
			  const std::string	&classReq,		const int			&levelReq,
			  const std::string &passiveEffect);
//	Access Functions
//	Getters
	const std::string getClassReq()			{ return m_classReq; }
	const int		  getLevelReq()			{ return m_levelReq; }
	const std::string getPassiveEffect()	{ return m_passiveEffect; }
//	Setters
	void setClassReq(std::string &classReq) { m_classReq = classReq; }
	void setLevelReq(int &levelReq) { m_levelReq = levelReq; }
	void setPassiveEffect(std::string &passiveEffect) { m_passiveEffect = passiveEffect; }
//	Others
};
