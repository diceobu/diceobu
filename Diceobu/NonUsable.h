/* This is the Non-usable class header file.
 * It contains the definition of the Non-usable
 * class along with it's Getters and Setters Functions.
 * It also contains the Non-usable class constructor declarations
 * and the declaration of other Functions.
 * Non-usable inherits from Item.
 */

#pragma once

//	User Libraries
#include "Item.h"
//	Standard Libraries
#include <string>

class NonUsable : public Item
{
//	Member Variables
private:
	std::string m_passiveEffect;
	int			m_remDuration;
//	Member Functions
public:
//	Constructors
	NonUsable(const int			&statBonuses,	const std::string	&description,
			  const std::string	&rarity,		const int			&goldValue,
			  const std::string	&passiveEffect,	const int			&remDuration);
//	Access Functions
//	Getters
	const std::string getPassiveEffect()	{ return m_passiveEffect; }
	const int		  getRemDuration()		{ return m_remDuration; }
//	Setters
	void setPassiveEffect(const std::string &passiveEffect)	{ m_passiveEffect = passiveEffect; }
	void setRemDuration(const int &remDuration)				{ m_remDuration = remDuration; }
//	Others
};
