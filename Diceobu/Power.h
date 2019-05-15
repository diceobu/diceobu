/* This is the Power class header file.
 * It contains the definition of the
 * Power class along with it's
 * Setters and Getters Functions.
 */

#pragma once

#include <string>

class Power
{
//	Member Variables
protected:
	const std::string	m_name;
	const int			m_levelReq;
	const std::string	m_ofClass;
	const std::string	m_description;
	const int			m_range;
	const std::string	m_damageType;
	const bool			m_cMaterial;
	const int			m_materialList;
	const std::string	m_aoe;
//	Member Functions
public:
//	Constructors
	Power(const std::string	&name,			const int &levelReq,		const std::string &ofClass,
		  const std::string	&description,	const int &range,			const std::string &damageType,
		  const bool		&cMaterial,		const int &materialList,	const std::string &aoe);
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
//	void setName(std::string name)					{ m_name = name; }
//	void setLevelReq(int levelReq)					{ m_levelReq = levelReq; }
//	void setOfClass(std::string ofClass)			{ m_ofClass = ofClass; }
//	void setDescription(std::string descreption)	{ m_description = descreption; }
//	void setRange(int range)						{ m_range = range; }
//	void setDamageType(std::string damageType)		{ m_damageType = damageType; }
//	void setCMaterial(bool cMaterial)				{ m_cMaterial = cMaterial; }
//	void setMaterialList(int materialList)			{ m_materialList = materialList; }
//	void setAoe(std::string aoe)					{ m_aoe = aoe; }
//	Others
	const void printAll();
};
