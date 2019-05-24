/* This is the Entity class header file.
 * It contains the definition of the Entity
 * class along with it's Getters and Setters Functions.
 * It also contains the Entity class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Map.h"
//	Standard Libraries
#include <string>
#include <utility>

class Entity
{
//	Member Variables
protected:
	std::string			m_name{ "emstr" };
	int					m_hitPoints{ -1 };
	int					m_overheal{ -1 };
	int					m_armorClass{ -1 };
	std::string			m_size{ "emstr" };
	int					m_height{ -1 };
	int					m_weight{ -1 };
	int					m_entityID{ -1 };
	std::pair<int, int>	m_coordinates{ -1, -1 };
	Map*				m_currMap;
//	Member Functions
public:
//	Constructors
	Entity(	const std::string			&name,			const int	&hitPoints,
			const int					&overheal,		const int	&armorClass,
			const std::string			&size,			const int	&height,
			const int					&weight,		const int	&entityID,
			const std::pair<int, int>	&coordinates,	Map*		&currMap);
//	Access Functions
//	Getters
	const std::string			getName()			{ return m_name; }
	const int					getHitPoints()		{ return m_hitPoints; }
	const int					getOverheal()		{ return m_overheal; }
	const int					getArmorClass()		{ return m_armorClass; }
	const std::string			getSize()			{ return m_size; }
	const int					getHeight()			{ return m_height; }
	const int					getWeight()			{ return m_weight; }
	const int					getEntityID()		{ return m_entityID; }
	const std::pair<int, int>	getCoordinates()	{ return m_coordinates; }
	const int					getCoordinateX()	{ return m_coordinates.first; }
	const int					getCoordinateY()	{ return m_coordinates.second; }
	Map*						getCurrMap()		{ return m_currMap; }
//	Setters
	void setName(const std::string &name)						{ m_name = name; }
	void setHitPoints(const int &hitPoints)						{ m_hitPoints = hitPoints; }
	void setOverheal(const int &overheal)						{ m_overheal = overheal; }
	void setArmorClass(const int &armorClass)					{ m_armorClass = armorClass; }
	void setSize(const std::string &size)						{ m_size = size; }
	void setHeight(const int &height)							{ m_height = height; }
	void setWeight(const int &weight)							{ m_weight = weight; }
	void setEntityID(const int &entityID)						{ m_entityID = entityID; }
	void setCoordinates(const std::pair<int, int> &coordinates)	{ m_coordinates = coordinates; }
	void setCoordinateX(const int coordinateX)					{ m_coordinates.first = coordinateX; }
	void setCoordinateY(const int coordinateY)					{ m_coordinates.second = coordinateY; }
//	Others
	void changeEntityPosition(Map* &currMap, const std::pair<int, int> &coordinates);
};
