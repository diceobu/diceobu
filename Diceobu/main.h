/* This is the main header file.
 * It contains Functions defined in main source file.
 */

#pragma once

//	User Libraries
#include "GlobalVariables.h"
//	Standard Libraries
#include <string>

//	Global Functions

void clearScreen();

void displayWelcomeMessage();

void displayAvailableOptions();

void displayFeedbackMessage(std::string message);

void displayActiveMaps();

void displayActiveCharacters();

void createNewMap();

void createNewCharacter(Map* &currMap);

std::string getUserOption();

void simLaunch();
