/* This is the Game Data header file.
 * It contains hard-coded game data
 * that would normaly be read from files.
 */

#pragma once

//	User Libraries
#include "GlobalStuff.h"

//	Standard Libraries
#include <array>
#include <string>

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
	//	tile(30, 30).
	tileDataContainer[30][30].tld_terrainType = "sand";
	tileDataContainer[30][30].tld_open = true;
	//	tile(30, 31).
	tileDataContainer[30][31].tld_terrainType = "sand";
	tileDataContainer[30][31].tld_open = true;
	//	tile(31, 30).
	tileDataContainer[31][30].tld_terrainType = "sand";
	tileDataContainer[31][30].tld_open = true;
	//	tile(31, 31).
	tileDataContainer[31][31].tld_terrainType = "sand";
	tileDataContainer[31][31].tld_open = true;
	//	tile(30, 32).
	tileDataContainer[30][32].tld_terrainType = "sand";
	tileDataContainer[30][32].tld_open = true;
	//	tile(31, 32).
	tileDataContainer[31][32].tld_terrainType = "sand";
	tileDataContainer[31][32].tld_open = true;
	//	tile(33, 33).
	tileDataContainer[33][33].tld_terrainType = "sand";
	tileDataContainer[33][33].tld_open = true;
}

void initAccountDetails()
{

}