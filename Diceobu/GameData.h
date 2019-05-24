/* This is the Game Data header file.
 * It contains hard-coded game data
 * that would normaly be read from files.
 */

#pragma once

//	User Libraries
#include "GlobalVariables.h"

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
	int my_var1 = 17;
	int my_var2 = 21;
	for (int i = 11; i <= 39; i++)
	{
		for (int j = 11; j <= 39; j++)
		{
			if ((j == 16) && (i == 16) || (j == 16) && (i == 20))
			{
				tileDataContainer[i][j].tld_terrainType = "stone";
				tileDataContainer[i][j].tld_open = true;
			}
			if ((i >= my_var1) && (i <= 23))
			{
				tileDataContainer[my_var1][my_var1].tld_terrainType = "stone";
				tileDataContainer[my_var1][my_var1].tld_open = true;
				tileDataContainer[my_var1][my_var1 - 1].tld_terrainType = "stone";
				tileDataContainer[my_var1][my_var1 - 1].tld_open = true;
				my_var1++;
			}
			if ((i >= my_var2) && (i <= 24))
			{
				if (i == 24)
				{
					tileDataContainer[my_var2][my_var2 - 5].tld_terrainType = "stone";
					tileDataContainer[my_var2][my_var2 - 5].tld_open = true;
					tileDataContainer[my_var2][my_var2 - 4].tld_terrainType = "stone";
					tileDataContainer[my_var2][my_var2 - 4].tld_open = true;
					my_var2++;
				}
				else
				{
					tileDataContainer[my_var2][my_var2 - 5].tld_terrainType = "stone";
					tileDataContainer[my_var2][my_var2 - 5].tld_open = true;
				}
			}
			if ((i >= 23) && (i <= 27) && (j == 23) || (i == 27) && (j >= 23) && (j <= 27)
				|| ((i >= 24) && (i <= 30) && (j == 20)) || ((i == 30) && (j >= 20) && (j <= 26))
				|| (i == 23) && (j >= 27) && (j <= 50) || (i >= 23) && (i <= 34) && (j == 39)
				|| (i == 34) && (j >= 27) && (j <= 50)
				|| ((j == 27) && (i >= 23) && (i <= 27) || (j == 27) && (i >= 30) && (i <= 34)))
			{
				tileDataContainer[i][j].tld_terrainType = "stone";
				tileDataContainer[i][j].tld_open = true;
			}
			if (tileDataContainer[i][j].tld_terrainType == "none")
			{
				tileDataContainer[i][j].tld_terrainType = "dirt";
				tileDataContainer[i][j].tld_open = true;
			}
		}
	}
}

void initAccountDetails()
{

}