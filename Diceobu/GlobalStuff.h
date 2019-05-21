/* This is the Global Stuff header file.
 * It contains Global variables and Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

//	Global Data Structures

static constexpr int mapSize{ 50 };

static bool inCombat{ false };

static unsigned int mapIDCounter{ 0 };

//	Global Functions

void clearScreen();

void displayWelcomeMessage();

void displayAvailableOptions();

void displayFeedbackMessage(std::string message);

void displayActiveMaps();

void displayActiveEntities();

void createNewMap();

void simLaunch();
