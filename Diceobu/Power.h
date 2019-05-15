/* This is the Power class header file.
 * It contains the definition of the
 * Power class along with it's
 * Setters and Getters Functions.
 */

#pragma once

#include <string>

class Power
{
//	Member variables
protected:
	std::string		m_name{ "Unnamed Power" };
	int				m_levelReq{ 1 };
	std::string		m_ofClass{ "Unknown Class" };
	std::string		m_description{ "Empty Description" };
	int				m_range{ 0 };
	std::string		m_damageType{ "Unknown Damage Type" };
	bool			m_cMaterial{ false };
	int				m_materialList{ 0 };
	std::string		m_aoe{ "Unknown aoe" };
//	Member Functions
public:
//	Constructors
	Power(std::string name,			int levelReq,		std::string ofClass,
		std::string description,	int range,			std::string damageType,
		bool cMaterial,				int materialList,	std::string aoe)
		: m_name{ name },					m_levelReq{ levelReq },				m_ofClass{ ofClass },
		m_description{ description },		m_range{ range },					m_damageType{ damageType },
		m_cMaterial{ cMaterial },			m_materialList{ materialList },		m_aoe{ aoe }
	{}
//	Access Functions
//	Getters
	const std::string	getName()			{ return m_name; }
	const int			getLevelReq()		{ return m_levelReq; }
	const std::string	getOfClass()		{ return m_ofClass; }
	const std::string	getDescription()	{ return m_description; }
	const int			getRange()			{ return m_range; }
	const std::string	getDamageType()		{ return m_damageType; }
	const bool			getCMaterial()		{ return m_cMaterial; }
	const int			getMaterialList()	{ return m_materialList; }
	const std::string	getAoe()			{ return m_aoe; }
//	Setters
	void setName(std::string name)					{ m_name = name; }
	void setLevelReq(int levelReq)					{ m_levelReq = levelReq; }
	void setOfClass(std::string ofClass)			{ m_ofClass = ofClass; }
	void setDescription(std::string descreption)	{ m_description = descreption; }
	void setRange(int range)						{ m_range = range; }
	void setDamageType(std::string damageType)		{ m_damageType = damageType; }
	void setCMaterial(bool cMaterial)				{ m_cMaterial = cMaterial; }
	void setMaterialList(int materialList)			{ m_materialList = materialList; }
	void setAoe(std::string aoe)					{ m_aoe = aoe; }
};
