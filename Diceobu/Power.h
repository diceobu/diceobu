/* This is the Power class header file.
 * It contains the definition of the
 * Power class along with it's
 * Getters and it's Constructor
 * declarations. It also contains
 * the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class Power
{
//	Member Variables
protected:
	std::string m_name;
	int			m_levelReq;
	std::string m_ofClass;
	std::string m_description;
	int			m_range;
	std::string m_damageType;
	bool		m_cMaterial;
	int			m_materialList;
	std::string m_aoe;
//	Member Functions
public:
//	Constructors
	Power(const std::string &name,			const int &levelReq,		const std::string &ofClass,
		  const std::string &description,	const int &range,			const std::string &damageType,
		  const bool		&cMaterial,		const int &materialList,	const std::string &aoe);
//	Access Functions
//	Getters
	std::string getName()		  { return m_name; }
	int			getLevelReq()	  { return m_levelReq; }
	std::string getOfClass()	  { return m_ofClass; }
	std::string getDescription()  { return m_description; }
	int			getRange()		  { return m_range; }
	std::string getDamageType()	  { return m_damageType; }
	bool		getCMaterial()	  { return m_cMaterial; }
	int			getMaterialList() { return m_materialList; }
	std::string getAoe()		  { return m_aoe; }
//	Setters
	void setName(const std::string name)				{ m_name = name; }
	void setLevelReq(const int levelReq)				{ m_levelReq = levelReq; }
	void setOfClass(const std::string ofClass)			{ m_ofClass = ofClass; }
	void setDescription(const std::string description)	{ m_description = description; }
	void setRange(const int range)						{ m_range = range; }
	void setDamageType(const std::string damageType)	{ m_damageType = damageType; }
	void setCMaterial(const bool cMaterial)				{ m_cMaterial = cMaterial; }
	void setMaterialList(const int materialList)		{ m_materialList = materialList; }
	void setAoe(const std::string aoe)					{ m_aoe = aoe; }
//	Others
};
