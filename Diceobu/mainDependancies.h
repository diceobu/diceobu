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

void createNewMap();

void deleteFirstActiveMap();

void createNewCharacter(Map* &currMap);

void deleteFirstActiveCharacter();

void displayInfo();

std::string getUserOption();

void simLaunch();
