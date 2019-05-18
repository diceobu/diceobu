/* This is the Map class header file.
 * It contains the definition of the Map
 * class along with it's Getters and Setters Functions.
 * It also contains the Map class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Tile.h"
//	Standard Libraries
#include <string>
#include <array>

class Map
{
//	Member Variables
protected:
	std::string								m_mapName;
	int										m_mapID;
private:
	int										m_sizeX;
	int										m_sizeY;
	std::string								m_mapEffects;
	int										m_tileIDCounter{ 0 };
	std::array<std::array<Tile, 20>, 20>	m_tileGrid;

//	Member Functions
public:
//	Constructors
	Map(const std::string	&mapName,	const int			&sizeX,			const int	&sizeY,
		const int			&mapID,		const std::string	&mapEffects);
//	Access Functions
//	Getters
	const std::string	getMapName()	{ return m_mapName; }
	const int			getSizeX()		{ return m_sizeX; }
	const int			getSizeY()		{ return m_sizeY; }
	const int			getMapID()		{ return m_mapID; }
	const std::string	getMapEffects()	{ return m_mapEffects; }
//	Setters
	void setMapName(const std::string &mapName)			{ m_mapName = mapName; }
	void setMapID(const int &mapID)						{ m_mapID = mapID; }
	void setMapEffects(const std::string &mapEffects)	{ m_mapEffects = mapEffects; }
//	Others
private:
	void initializeMapTiles(int	&tileIDCounter,	std::array<std::array<Tile, 20>, 20> &m_tileGrid);
};
