/* This is the main header file.
 * It contains Functions defined in main source file.
 */

#pragma once

//	User Libraries
#include "GlobalVariables.h"
#include "Map.h"
#include "Character.h"
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

int characterCreation(const std::string &name, const std::string &cClass, const std::string &race, const std::string &alignment,
	const std::string &background, const int &balance, const int &level, const int &coordX, const int &coordY);

int createNewCharacter();

void deleteCurrentCharacter();

void displayInfo();

void moveCurrentCharacter();

void resolveCombatAttack();

std::string getUserOption();

void simLaunch();

//	it's a feature bix

extern Map* currWorkingMap;

extern Character* currWorkingChar;
