/* This is the Spell class header file.
 * It contains the definition of the
 * Spell class along with it's
 * Getters Functions.
 * Spell inherits from Power.
 */

#pragma once

//	User Libraries
#include "Power.h"
//	Standard Libraries
#include <string>

class Spell : public Power
{
//	Member Variables
private:
	int		  m_castingTime;
	std::string m_duration;
	int		  m_concentration;
	bool		  m_cVerbal;
	bool		  m_cSomatic;
	std::string m_schOfMagic;
	int		  m_magicLevel;
//	Member Functions
public:
//	Constructors
	Spell(const std::string &name,			const int			&levelReq,
		  const std::string &ofClass,		const std::string	&description,
		  const int		    &range,			const std::string	&damageType,
		  const bool		&cMaterial,		const int			&materialList,
		  const std::string &aoe,			const int			&castingTime,
		  const std::string &duration,		const int			&concentration,
		  const bool		&cVerbal,		const bool			&cSomatic,
		  const std::string &schOfMagic,	const int			&magicLevel);
//	Access Functions
//	Getters
	int			getCastingTime()	{ return m_castingTime; }
	std::string getDuration()		{ return m_duration; }
	int			getConcentration()	{ return m_concentration; }
	bool		getCVerbal()		{ return m_cVerbal; }
	bool		getCSomatic()		{ return m_cSomatic; }
	std::string getSchOfMagic()		{ return m_schOfMagic; }
	int			getMagicLevel()		{ return m_magicLevel; }
//	Setters
	void setCastingTime(const int castingTime)			{ m_castingTime = castingTime; }
	void setDuration(const std::string duration)		{ m_duration = duration; }
	void setConcentration(const int concentration)		{ m_concentration = concentration; }
	void setCVerbal(const bool cVerbal)					{ m_cVerbal = cVerbal; }
	void setCSomatic(const bool cSomatic)				{ m_cSomatic = cSomatic; }
	void setSchOfMagic(const std::string schOfMagic)	{ m_schOfMagic = schOfMagic; }
	void setMagicLevel(const int magicLevel)			{ m_magicLevel = magicLevel; }
//	Others
};