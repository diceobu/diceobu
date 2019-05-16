/* This is the Entity class header file.
 * It contains the definition of the Entity
 * class along with it's Getters and Setters Functions.
 * It also contains the Entity class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class Entity
{
//	Member Variables
protected:
	std::string	m_name;
	int			m_hitPoints;
	int			m_overheal;
	int			m_armorClass;
	std::string	m_size;
	int			m_height;
	int			m_weight;
	int			m_coordinates;
	int			m_entityID;
//	Member Functions
public:
//	Constructors
	Entity(const std::string	&name,		const int	&hitPoints,
		   const int			&overheal,	const int	&armorClass,
		   const std::string	&size,		const int	&height,
		   const int			&weight,	const int	&coordinates,
		   const int			&entityID);
//	Access Functions
//	Getters
	const std::string getName()	{ return m_name; }
	const int getHitPoints()	{ return m_hitPoints; }
	const int getOverheal()		{ return m_overheal; }
	const int getArmorClass()	{ return m_armorClass; }
	const std::string getSize()	{ return m_size; }
	const int getHeight()		{ return m_height; }
	const int getWeight()		{ return m_weight; }
	const int getCoordinates()	{ return m_coordinates; }
	const int getEntityID()		{ return m_entityID; }
//	Setters
	void setName(const std::string &name)		{ m_name = name; }
	void setHitPoints(const int &hitPoints)		{ m_hitPoints = hitPoints; }
	void setOverheal(const int &overheal)		{ m_overheal = overheal; }
	void setArmorClass(const int &armorClass)	{ m_armorClass = armorClass; }
	void setSize(const std::string &size)		{ m_size = size; }
	void setHeight(const int &height)			{ m_height = height; }
	void setWeight(const int &weight)			{ m_weight = weight; }
	void setCoordinates(const int &coordinates)	{ m_coordinates = coordinates; }
	void setEntityID(const int &entityID)		{ m_entityID = entityID; }
//	Others
};
