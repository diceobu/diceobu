#pragma once

//	User Libraries

//	Standard Libraries
#include <array>
#include <string>

//	Constants
#include "GlobalVariables.h"

//	Data Structures
struct tileData
{
	std::string	tld_terrainType	{ "none" };
	std::string	tld_tileEffects	{ "none" };
	bool		tld_open		{ false };
	bool		tld_occupied	{ false };
	int			tld_occupantID	{ -1 };
};

std::array<std::array<tileData, mapSize>, mapSize> tileDataContainer;

//	Data Functions
void initTileDataCont()
{
	//	tile (row, column).
	//	tile (5, 5).
	tileDataContainer[5][5].tld_terrainType = "sand";
	tileDataContainer[5][5].tld_open = true;
	//	tile (5, 6).
	tileDataContainer[5][6].tld_terrainType = "sand";
	tileDataContainer[5][6].tld_open = true;
	//	tile (6, 5).
	tileDataContainer[6][5].tld_terrainType = "sand";
	tileDataContainer[6][5].tld_open = true;
	//	tile (6, 6).
	tileDataContainer[6][6].tld_terrainType = "sand";
	tileDataContainer[6][6].tld_open = true;
}

void initAccountDetails()
{

}