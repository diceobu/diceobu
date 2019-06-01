/* This is the Spell class source file.
 * It contains the definition of the
 * Spell class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Spell.h"
#include "Power.h"
//	Standard Libraries
#include <string>

//	Constructors
Spell::Spell(const std::string &name,		const int		  &levelReq,
			 const std::string &ofClass,	const std::string &description,
			 const int		   &range,		const std::string &damageType,
			 const bool		   &cMaterial,	const int		  &materialList,
			 const std::string &aoe,		const int		  &castingTime,
			 const std::string &duration,	const int		  &concentration,
			 const bool		   &cVerbal,	const bool		  &cSomatic,
			 const std::string &schOfMagic, const int		  &magicLevel)
	: Power(name, levelReq, ofClass, description, range, damageType, cMaterial, materialList, aoe),
	  m_castingTime{ castingTime },		m_duration{ duration },
	  m_concentration{ concentration }, m_cVerbal{ cVerbal },
	  m_cSomatic{ cSomatic },			m_schOfMagic{ schOfMagic },
	  m_magicLevel{ magicLevel }
{}
//	Others
