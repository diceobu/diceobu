/* This is the main header file.
 * It contains Functions defined in main source file.
 */

#pragma once

//    User Libraries
#include "GlobalVariables.h"
#include "Map.h"
#include "Character.h"
#include "mapwidget.h"
//    Standard Libraries
#include <string>

//    Global Functions

std::list<Map*> getActiveMaps();

std::list<Character*> getActiveCharacters();

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

void clearMapInstance();

void deleteCurrentMap();

int createNewCharacter();

int characterCreation(const std::string &name, const std::string &gender, const std::string &cClass, const std::string &race, const std::string &alignment,
    const std::string &background, const int &balance, const int &level, const int &coordX, const int &coordY);

void deleteCurrentCharacter();

void displayInfo();

void moveCurrentCharacterUI(const int &coordX, const int &coordY);

void moveCurrentCharacter();

void enQueueCombat();

void displayCombatQueue();

void displayAvailableMoves();

void resolveCombatMove(const std::string &power);

void resolveCombatAttack();

std::string getUserOption();

/*void diceobuSystemCore(std::string input,const std::string &cName = "Name", const std::string &cClass, const std::string &cRace, const std::string &cAlignment,
                       const std::string &cBackground, const int &cBalance, const int &cLevel, const int &coordX, const int &coordY;)*/


void diceobuSystemCore(std::string input, const int &coordX = 25, const int &coordY = 25, const std::string &cName = "Adam",
						const std::string	&cGender = "Male", const std::string &cClass = "Fighter", const std::string &cRace = "Human",
						const std::string &cAlignment = "Neutral",
						const std::string &cBackground = "Soldier", const int &cBalance = 0, const int &cLevel = 0);
void simLaunch();

void checkLists();  // NOT IN ORDERRRRRRRRRRRR

bool activeCharactersisEmpty();

bool activeMapsisEmpty();

void jumpToMap(const int &targetMapID);


//    it's a feature bix

extern Map* currWorkingMap;

extern Character* currWorkingChar;

extern int muteLog;

extern bool inCombat;

extern bool inCombatTemp;

std::list<Character*> getCombatQueue();
