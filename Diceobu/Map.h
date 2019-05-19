/* This is the Map class header file.
 * It contains the definition of the Map
 * class along with it's Getters and Setters Functions.
 * It also contains the Map class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "GlobalVariables.h"
#include "Tile.h"
//	Standard Libraries
#include <string>
#include <array>

class Map
{
//	Member Variables
protected:
	std::string										m_mapName		{ "emstr" };
	int												m_mapID			{ -1 };
private:
	int												m_sizeX			{ 1 };
	int												m_sizeY			{ 1 };
	std::string										m_mapEffects	{ "emstr" };
	int												m_tileIDCounter	{ 0 };
public:
	std::array<std::array<Tile, mapSize>, mapSize>	m_tileGrid;

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
	//const std::array<std::array<Tile, mapSize>, mapSize> getTileGrid() { return m_tileGrid; }
//	Setters
	void setMapName(const std::string &mapName)			{ m_mapName = mapName; }
	void setMapID(const int &mapID)						{ m_mapID = mapID; }
	void setMapEffects(const std::string &mapEffects)	{ m_mapEffects = mapEffects; }
//	Others
private:
	void initializeMapTiles();
public:
	void printMap();
};
