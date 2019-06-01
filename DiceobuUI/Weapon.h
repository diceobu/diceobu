/* This is the Weapon class header file.
 * It contains the definition of the Weapon
 * class along with it's Getters and Setters Functions.
 * It also contains the Weapon class constructor declarations
 * and the declaration of other Functions.
 * Weapon inherits from Equipment.
 */

#pragma once

//	User Libraries
#include "Equipment.h"
//	Standard Libraries
#include <string>

class Weapon : public Equipment
{
//	Member Variables
private:
	int m_damage;
//	Member Functions
public:
//	Constructors
	Weapon(const int			&statBonuses,	const std::string	&description,
		   const std::string	&rarity,		const int			&goldValue,
		   const std::string	&classReq,		const int			&levelReq,
		   const std::string	&passiveEffect,	const int			&damage);
//	Access Functions
//	Getters
	const int getDamage()	{ return m_damage; }
//	Setters
	void setDamage(const int &damage)	{ m_damage = damage; }
//	Others
};
