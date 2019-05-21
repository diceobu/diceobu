/* This is the Global Stuff header file.
 * It contains Global variables and Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries


//	Global Data Structures

static constexpr int mapSize{ 50 };

static bool inCombat{ false };

//	Global Functions
void clearScreen();

void displayWelcomeMessage();

void displayAvailableOptions();

void enterMainLoop();

void displayActiveMaps();

void displayActiveEntities();

void createNewMap();
