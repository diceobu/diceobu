/* This is the main header file.
 * It contains Functions defined in main source file.
 */

#pragma once

//	User Libraries
#include "GlobalVariables.h"
#include "Map.h"
//	Standard Libraries
#include <string>

//	Global Functions

void clearScreen();

void displayWelcomeMessage();

void displayAvailableOptions();

void displayFeedbackMessage(std::string message);

void writeActiveMaps();

void displayActiveMaps();

void displayActiveCharacters();

void chooseNextMap();

void chooseNextCharacter();

void createNewMap();

void deleteCurrentMap();

void createNewCharacter(Map* &currMap);

void deleteCurrentCharacter();

void displayInfo();

void moveCurrentCharacter();

std::string getUserOption();

void simLaunch();
