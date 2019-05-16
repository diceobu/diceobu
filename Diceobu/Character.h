/* This is the Character class header file.
 * It contains the definition of the Character
 * class along with it's Getters and Setters Functions.
 * It also contains the Character class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Entity.h"
//	Standard Libraries
#include <string>

class Character : public Entity
{
//	Member Variables
public:
//	Some public Member Variables
protected:
	int			m_abilityScores;
	std::string	m_powers;
	int			m_speed;
	std::string	m_cClass;
	std::string	m_alignment;
	std::string	m_equipment;
	int			m_level;
	int			m_exp;
	std::string	m_race;
	std::string	m_languages;
	int			m_balance;
	std::string	m_background;
	std::string	m_proficiency;
	int			m_visionRange;
	int			m_reach;
//	Some protected Member Variables
private:
//	Some private Member Variables

//	Member Functions
public:
//	Constructors
	Character(const std::string	&name,			const int	&hitPoints,
			  const int			&overheal,		const int	&armorClass,
			  const std::string	&size,			const int	&height,
			  const int			&weight,		const int	&coordinates,
			  const int			&entityID,
			  const int			&abilityScores,	const std::string	&powers,
			  const int			&speed,			const std::string	&cClass,		const std::string	&alignment,
			  const std::string	&equipment,		const int			&level,			const int			&exp,
			  const std::string	&race,			const std::string	&languages,		const int			&balance,
			  const std::string	&background,	const std::string	&proficiency,	const int			&visionRange,
			  const int			&reach);
//	Access Functions
//	Getters
	const int			getAbilityScores()	{ return m_abilityScores; }
	const std::string	getPowers()			{ return m_powers; }
	const int			getSpeed()			{ return m_speed; }
	const std::string	getCClass()			{ return m_cClass; }
	const std::string	getAlignment()		{ return m_alignment; }
	const std::string	getEquipment()		{ return m_equipment; }
	const int			getLevel()			{ return m_level; }
	const int			getExp()			{ return m_exp; }
	const std::string	getRace()			{ return m_race; }
	const std::string	getLanguages()		{ return m_languages; }
	const int			getBalance()		{ return m_balance; }
	const std::string	getBackground()		{ return m_background; }
	const std::string	getProficiency()	{ return m_proficiency; }
	const int			getVisionRange()	{ return m_visionRange; }
	const int			getReach()			{ return m_reach; }
//	Setters
	void setAbilityScores(const int &abilityScores)		{ m_abilityScores = abilityScores; }
	void setPowers(const std::string &powers)			{ m_powers = powers; }
	void setSpeed(const int &speed)						{ m_speed = speed; }
	void setCClass(const std::string &cClass)			{ m_cClass = cClass; }
	void setAlignment(const std::string &alignment)		{ m_alignment = alignment; }
	void setEquipment(const std::string &equipment)		{ m_equipment = equipment; }
	void setLevel(const int &level)						{ m_level = level; }
	void setExp(const int &exp)							{ m_exp = exp; }
	void setRace(const std::string &race)				{ m_race = race; }
	void setLanguages(const std::string &languages)		{ m_languages = languages; }
	void setBalance(const int &balance)					{ m_balance = balance; }
	void setBackground(const std::string &background)	{ m_background = background; }
	void setProficiency(const std::string &proficiency)	{ m_proficiency = proficiency; }
	void setVisionRange(const int &visionRange)			{ m_visionRange = visionRange; }
	void setReach(const int &reach)						{ m_reach = reach; }
//	Others
};
