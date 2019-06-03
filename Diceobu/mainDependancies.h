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

void singleTargetAttackCalculator(const std::string &name, Character* &targetChar, const int &powerDamageModifier);

void aoeAttackDamageDealer(const int &i, const int &j, Power* &power, const int &powerDamageModifier);

void aoeAttackCalculator(Power* &power, const int &targetCoordX, const int &targetCoordY, const int &powerDamageModifier, const int &radious);

void resolveCombatMove(const std::string &name, Character* &targetChar, const int &targetCoordX, const int &targetCoordY);

void clearTileEffects();

void resolveCombatAttack();

std::string getUserOption();

void diceobuSystemCore(std::string input, const int &coordX = 25, const int &coordY = 25, const std::string &cName = "Adam",
						const std::string	&cGender = "Male", const std::string &cClass = "Fighter", const std::string &cRace = "Human",
						const std::string &cAlignment = "Neutral",
						const std::string &cBackground = "Soldier", const int &cBalance = 0, const int &cLevel = 0);

bool activeCharactersisEmpty();

bool activeMapsisEmpty();

void jumpToMap(const int &targetMapID);

void jumpToCharacter(const int &targetCharacterID);

void resolveCombatMove(const std::string &name, Character* &targetChar, const int &targetCoordX, const int &targetCoordY);

void nextTurn();

Power* findPower(std::string powerName);

int DamageCalculator(Power* &power);

void resolveMeleeAttack(Character* &targetChar);

void resolveRangedAttack(Character* &targetChar);

void resolveAoeAttack(const std::string &name, const int &targetCoordX, const int &targetCoordY, const int &powerDamageModifier, const int &radious);

void singleTargetAttackCalculator(const std::string &name, Character* &targetChar, int &powerDamageModifier);

std::list<Character*> getCombatQueue();

extern Map* currWorkingMap;

extern Character* currWorkingChar;

extern int muteLog;

extern bool inCombat;

extern bool inCombatTemp;

extern std::list<Power*> powerList;

void simLaunch();
