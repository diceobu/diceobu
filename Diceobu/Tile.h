/* This is the Tile class header file.
 * It contains the definition of the Tile
 * class along with it's Getters and Setters Functions.
 * It also contains the Tile class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class Tile
{
//	Member Variables
protected:
	int			m_tileID;
	std::string	m_terrainType;
	std::string	m_tileEffects;
	bool		m_open;
//	Member Functions
public:
//	Constructors
	Tile() {}
	Tile(const int			&tileID,		const std::string	&terrainType,
		 const std::string	&tileEffects,	const bool			&open);
//	Access Functions
//	Getters
	const int		  getTileID()			{ return m_tileID; }
	const std::string getTerrainType()		{ return m_terrainType; }
	const std::string getTileEffects()		{ return m_tileEffects; }
	const bool		  getOpen()				{ return m_open; }
//	Setters
	void setTileID(const int &tileID)					{ m_tileID = tileID; }
	void setTerrainType(const std::string &terrainType)	{ m_terrainType = terrainType; }
	void setTileEffects(const std::string &tileEffects)	{ m_tileEffects = tileEffects; }
	void setOpen(const bool &open)						{ m_open = open; }
//	Others
};
