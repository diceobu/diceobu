/* This is the Spell class header file.
 * It contains the definition of the
 * Spell class along with it's
 * Setters and Getters Functions.
 * Spell inherits from Power.
 */

#pragma once

#include <string>
#include "Power.h"

class Spell : private Power
{
//	Member Variables
private:
	const int			m_castingTime;
	const std::string	m_duration;
	const int			m_concentration;
	const bool			m_cVerbal;
	const bool			m_cSomatic;
	const std::string	m_schOfMagic;
	const int			m_magicLevel;
//	Member Functions
public:
//	Constructors
	Spell(const std::string &name,			const int		  &levelReq,
		  const std::string &ofClass,		const std::string &description,
		  const int			&range,			const std::string &damageType,
		  const bool		&cMaterial,		const int		  &materialList,
		  const std::string &aoe,			const int		  &castingTime,
		  const std::string &duration,		const int		  &concentration,
		  const bool		&cVerbal,		const bool		  &cSomatic,
		  const std::string &schOfMagic,	const int		  &magicLevel)
		: Power(name, levelReq, ofClass, description, range, damageType, cMaterial, materialList, aoe),
		  m_castingTime{ castingTime },		m_duration{ duration },
		  m_concentration{ concentration },	m_cVerbal{ cVerbal },
		  m_cSomatic{ cSomatic },			m_schOfMagic{ schOfMagic },
		  m_magicLevel{ magicLevel }
	{}
//	Access Functions
//	Getters
	const int getCastingTime()			{ return m_castingTime; }
	const std::string getDuration()		{ return m_duration; }
	const int getConcentration()		{ return m_concentration; }
	const bool getCVerbal()				{ return m_cVerbal; }
	const bool getCSomatic()			{ return m_cSomatic; }
	const std::string getSchOfMagic()	{ return m_schOfMagic; }
	const int getMagicLevel()			{ return m_magicLevel; }
//	Setters
};