/* This is the Map class header file.
 * It contains the definition of the Map
 * class along with it's Getters and Setters Functions.
 * It also contains the Map class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class Map
{
//	Member Variables
protected:
	std::string	m_mapName;
	int			m_size;
	int			m_mapID;
private:
	std::string	m_mapEffects;
//	Member Functions
public:
//	Constructors
	Map(const std::string	&mapName,	const int			&size,
		const int			&mapID,		const std::string	&mapEffects);
	Map(const std::string	&mapName,	const int &size, const int &mapID);
//	Access Functions
//	Getters
	const std::string getMapName()		{ return m_mapName; }
	const int		  getSize()			{ return m_size; }
	const int		  getMapID()		{ return m_mapID; }
	const std::string getMapEffects()	{ return m_mapEffects; }
//	Setters
	void setMapName(const std::string &mapName)			{ m_mapName = mapName; }
	void setSize(const int &size)						{ m_size = size; }
	void setMapID(const int &mapID)						{ m_mapID = mapID; }
	void setMapEffects(const std::string &mapEffects)	{ m_mapEffects = mapEffects; }
//	Others
};
