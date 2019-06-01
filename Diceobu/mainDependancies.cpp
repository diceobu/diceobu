/* This file contains the definitions
 * of functions declared in the mainDependancies
 * header file.
 */

// User Libraries
#include "GlobalVariables.h"
#include "DiceobuLibrary.h"
#include "mainDependancies.h"
#include "lobbywindow.h"
#include "loginwindow.h"
#include "mainuiclass.h"
#include "mapcreatewindow.h"
//	Standard Libraries
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <iterator>
//  Qt Libraries
#include <QMessageBox>
#include <QDebug>
//	Global Structures
static std::list<Map*> activeMaps;

static std::list<Character*> activeCharacters;

Map* currWorkingMap;
Character* currWorkingChar;

int muteLog = 0;
//Character* currWorkingChar = new Character("jeff", 50, 30, 20, "large", 24, 22, characterIDCounter++, { 25, 25 }, currWorkingMap, 11, { "none" }, 2, "fighter",
//"lawful trash", "some vest", 20, 50000, "human", "some langs", 0, "tourash", "none", -1, -5);

static std::list<Character*> combatQueue;


std::list<Map*> getActiveMaps()
{
    return activeMaps;
}

std::list<Character*> getActiveCharacters()
{
    return activeCharacters;
}

void checkLists()
{
    // qDebug() << "Maps:" << activeMaps.empty() << "Characters:" << activeCharacters.empty();
}

bool activeCharactersisEmpty()
{
    return activeCharacters.empty();
}

bool activeMapsisEmpty()
{
    return activeMaps.empty();
}

void clearScreen()
{
	std::cout << "\033[2J\033[1;1H";
}

void displayWelcomeMessage()
{
	std::cout << "Welcome to Dfireobu also known as Diceobu Jr, or Diceobu's younger sibling.\n"
		<< "Dfireobu is not a complete game.\n"
		<< "It's just a platform that will guide you through the basic features Diceobu will have to offer.\n"
		<< "Most of the available options will be automated in the final product.\n"
		<< "Here you can take control of them to freely explore and test their behavior.\n"
		<< "Fullscreen view is recommended.\n";
}


void displayAvailableOptions()
{
	std::cout	<< "List of available options (select one of the numbers/symbols and hit enter):\n";
	std::cout	<< "1.	Create new Default Map\n"
				<< "2.	Create new Default Character\n"
				<< "3.	Move current character\n"
				<< "4.	Start/End combat\n"
				<< "5.	Display help information\n"
				<< "6.	Display all active Maps\n"
				<< "7.	Display all active Characters\n"
				<< "8.	Delete current Map\n"
				<< "9.	Delete current Character\n"
				<< "10.	Choose next Map\n"
				<< "11.	Choose next Character\n";
	if(inCombat)
	std::cout	<< "a.	Choose attack\n";
	std::cout	<< "x.	Exit\n";
	std::cout	<< '\n';

	if (inCombat)	std::cout << "\t#############\n";
	if (inCombat)	std::cout << "\t# IN COMBAT #\n";
	if (inCombat)	std::cout << "\t#############\n\n";
	if (!activeMaps.empty())	std::cout << "\tCurrent Map: " << currWorkingMap->getMapID() << '\n';
	if (!activeCharacters.empty())	std::cout << "\tCurrent Character: " << currWorkingChar->getEntityID() << '\n';
}

void displayFeedbackMessage(std::string message)
{
	std::cout << '\n' << '\t' << '\t' << '\t'
		<< message << '\n';
}

void writeActiveMaps()
{
	std::list <Map*> ::iterator iter;
	for (iter = activeMaps.begin(); iter != activeMaps.end(); iter++)
	{
		Map* currMap = *iter;
		currMap->writeMap();
	}
}

void displayActiveMaps()
{
	std::list <Map*> :: iterator iter;
	for (iter = activeMaps.begin(); iter != activeMaps.end(); iter++)
	{
		std::cout << '\n';
		Map* currMap = *iter;
		currMap->printMap();
		std::cout << '\n';
	}
}

void displayActiveCharacters()
{
	std::list <Character*> :: iterator iter;
	for (iter = activeCharacters.begin(); iter != activeCharacters.end(); iter++)
	{
		std::cout << '\n';
		Character* currCharacter = *iter;
		currCharacter->printCharacter();
		std::cout << '\n';
	}
}

void chooseNextMap()
{
	std::list <Map*> :: iterator iter;
	bool nextUp{ false };
	for (iter = activeMaps.begin(); iter != activeMaps.end(); iter++)
	{
		if (nextUp)
		{
			currWorkingMap = *iter;
			nextUp = false;
			break;
		}
		if (currWorkingMap == *iter)
		{
			nextUp = true;
		}
	}
	if (nextUp)
	{
		currWorkingMap = activeMaps.front();
	}
	if (!activeCharacters.empty() && !currWorkingMap->m_containingCharacters.empty())
	{
		std::list <Character*> :: iterator iter2;
		for (iter2 = activeCharacters.begin(); iter2 != activeCharacters.end(); iter2++)
		{
			Character* currCharacter = *iter2;
			if (currCharacter->getEntityID() == currWorkingMap->m_containingCharacters.back())
			{
				currWorkingChar = currCharacter;
				break;
			}
		}
	}
}

void jumpToMap(const int &targetMapID)
{
	std::list <Map*> ::iterator iter;
	bool found{ false };
	for (iter = activeMaps.begin(); iter != activeMaps.end(); iter++)
	{
		currWorkingMap = *iter;
		if (currWorkingMap->getMapID() == targetMapID)
		{
			found = true;
            break;
		}
		if (found == true)
		{
			if (!activeCharacters.empty() && !currWorkingMap->m_containingCharacters.empty())
			{
				std::list <Character*> ::iterator iter2;
				for (iter2 = activeCharacters.begin(); iter2 != activeCharacters.end(); iter2++)
				{
					Character* currCharacter = *iter2;
					if (currCharacter->getEntityID() == currWorkingMap->m_containingCharacters.back())
					{
						currWorkingChar = currCharacter;
						break;
					}
				}
			}
		}
	}
}

void chooseNextCharacter()
{
	std::list <Character*> ::iterator iter;
	bool nextUp{ false };
	for (iter = activeCharacters.begin(); iter != activeCharacters.end(); iter++)
	{
		if (nextUp)
		{
			currWorkingChar = *iter;
			nextUp = false;
			break;
		}
		if (currWorkingChar == *iter)
		{
			nextUp = true;
		}
	}
	if (nextUp)
	{
		currWorkingChar = activeCharacters.front();
	}
	currWorkingMap = currWorkingChar->getCurrMap();
}

void jumpToCharacter(const int &targetCharacterID)
{
	std::list <Character*> ::iterator iter;
	bool found{ false };
	for (iter = activeCharacters.begin(); iter != activeCharacters.end(); iter++)
	{
		currWorkingChar = *iter;
        if (currWorkingChar->getEntityID() == targetCharacterID)
		{
			found = true;
			break;
		}
     }
    if (found == true)
    {
        currWorkingMap = currWorkingChar->getCurrMap();
    }
}

void createNewMap()
{
	activeMaps.push_back(new Map(mapName, mapSize, mapSize, mapIDCounter++, "none"));
	currWorkingMap = activeMaps.back();
}

void clearMapInstance()
{
	std::ofstream outFile("map-instance.dat");

	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	for (int i = 0; i < mapSize; i++)
	{
		outFile << '#';
		for (int j = 0; j < mapSize; j++)
		{
			outFile << ' ';
			if (j == 49)	outFile << '#' << '\n';
		}
	}
	for (int i = 0; i < mapSize + 2; i++)	outFile << '#';
	outFile << '\n';
	outFile << "!Symbols: x = Entity, d = dirt, g = grass, r = rock, s = sand, w = water, f = fire, i = ice, a = acid, ' ' = closed tile";
}

void deleteCurrentMap()
{
	activeMaps.remove(currWorkingMap);
	currWorkingMap->~Map();
	if (!activeMaps.empty())
	{
		currWorkingMap = activeMaps.back();
		if (!activeCharacters.empty() && !currWorkingMap->m_containingCharacters.empty())
		{
			std::list <Character*> ::iterator iter;
			for (iter = activeCharacters.begin(); iter != activeCharacters.end(); iter++)
			{
				Character* currCharacter = *iter;
				if (currCharacter->getEntityID() == currWorkingMap->m_containingCharacters.back())
				{
					currWorkingChar = currCharacter;
					break;
				}
			}
		}
	}
	else
	{
		clearMapInstance();
	}
}

int createNewCharacter()
{
	if (currWorkingMap->m_tileGrid[25][25]->getOccupied()) return 1;
	activeCharacters.push_back(new Character("jeff", 50, 30, 20, "large", 24, 22, characterIDCounter++, { 25, 25 }, currWorkingMap, 11, { "none" }, 2, "fighter",
		"lawful trash", "some vest", 20, 50000, "human", "some langs", 0, "tourash", "none", -1, -5));
	currWorkingChar = activeCharacters.back();
	currWorkingMap->m_containingCharacters.push_back(currWorkingChar->getEntityID());
	return 0;
}

int characterCreation(const std::string &name, const std::string &cClass, const std::string &race, const std::string &alignment,
	const std::string &background, const int &balance, const int &level, const int &coordX, const int &coordY)
{
    if (currWorkingMap->m_tileGrid[coordX][coordY]->getOccupied() || !currWorkingMap->m_tileGrid[coordX][coordY]->getOpen())	return 1; //????????????????????

	int					hitPoints{ 10 };
	int					overheal{ 0 };
	int					armorClass{ 5 };
	std::string			size{ "medium" };
	int					height{ 5 };
	int					weight{ 60 };
	std::pair<int, int>	coordinates{coordX, coordY};
	int					abilityScores{ 10 };
	std::list<std::string>	powers;
	int					speed{ 3 };
	std::string			equipment{ "leather armor" };
	int					exp{ 0 };
	std::string			languages{ "common" };
	std::string			proficiency{};
	int					visionRange{ 30 };
	int					reach{ 1 };

	if (cClass == "Fighter")
	{
		hitPoints += 8 * level;
		armorClass += 20;
		abilityScores += 5;
		powers = { "phMelAttck", "indomitable", "cleave", "crescendo" };
		equipment = "heavy armor";
	}
	else if (cClass == "Wizard")
	{
		hitPoints += 4 * level;
		armorClass += 5;
		abilityScores += 20;
		powers = { "phMelAttck", "mgRangAttck", "callMeteor", "suddenStorm", "iceAge",
			"grandIllusion", "stealTime", "oppressiveForce", "iceKnife", "maelstromOfChaos",
			"disintegrate", "teleport", "earthenAegis" };
		equipment = "cloth armor";
	}
	else if (cClass == "Rogue")
	{
		hitPoints += 6 * level;
		armorClass += 10;
		abilityScores += 12;
		powers = { "phMelAttck", "sneakAttack ", "stealth", "impossibleToCatch", "throwingDagger" };
	}
	else if (cClass == "Ranger")
	{
		hitPoints += 5 * level;
		armorClass += 7;
		abilityScores += 15;
		powers = { "phRangAttck", "hawkEye", "longShot", "cheapShot", "naturesWay", "rainningArrow" };
	}
	if (race == "Dwarf")
	{
		hitPoints += level;
		armorClass += 5;
		size = "small";
		powers.push_back("repair");
		languages = "common&dwarvish";
		visionRange += 10;
		weight += 30;
	}
	else if (race == "Elf")
	{
		height += 3;
		abilityScores += 10;
		powers.push_back("heal");
		speed += 2;
		languages = "common&elvish";
		visionRange += 30;
	}
	else if (race == "Human")
	{
		hitPoints += level / 5;
		armorClass += 2;
		height += 2;
		abilityScores += 5;
		powers.push_back("inspire");
		speed += 1;
		weight += 15;
	}
    //currWorkingMap->m_tileGrid[coordX][coordY]->setOccupied(true); //??????????????????????????
	activeCharacters.push_back(new Character(name, hitPoints, overheal, armorClass,
		size, height, weight, characterIDCounter++, coordinates, currWorkingMap, abilityScores,
		powers, speed, cClass, alignment, equipment, level, exp, race, languages, balance,
		background, proficiency, visionRange, reach));
	currWorkingChar = activeCharacters.back();
	currWorkingMap->m_containingCharacters.push_back(currWorkingChar->getEntityID());

	return 0;
}

void deleteCurrentCharacter()
{
    currWorkingMap->m_containingCharacters.remove(currWorkingChar->getEntityID());
	currWorkingChar->getCurrMap()->m_tileGrid[currWorkingChar->getCoordinateX()][currWorkingChar->getCoordinateY()]->setOccupied(false);
	currWorkingChar->getCurrMap()->m_tileGrid[currWorkingChar->getCoordinateX()][currWorkingChar->getCoordinateY()]->setOccupantID(-1);
	activeCharacters.remove(currWorkingChar);
	currWorkingChar->~Character();
	if (!activeCharacters.empty())
	{
		currWorkingChar = activeCharacters.back();
		currWorkingMap = currWorkingChar->getCurrMap();
	}
}

void displayInfo()
{
	std::cout << "Information\n\n";
	std::cout << "Current Map shows the Map that your changes will affect.\n"
		<< "Current Character shows the Character that you changes will affect.\n"
		<< "You can work only with one Character/Map at a time\n";
	std::cout << '\n';
}

void moveCurrentCharacterUI(const int &coordX, const int &coordY)
{
	std::pair<int, int>	coords{ coordX, coordY };
	std::list <Map*> ::iterator iter;
	Map* targetMap;
	for (iter = activeMaps.begin(); iter != activeMaps.end(); iter++)
	{
		targetMap = *iter;
		if (targetMap->getMapID() == targetMapID)
		{
			break;
		}
	}
	currWorkingChar->changeEntityPosition(currWorkingMap, targetMap, coords);
	currWorkingMap = targetMap;
}

//void moveCurrentCharacter()
//{
//	std::string input;
//	clearScreen();
//	displayAvailableOptions();
//	displayFeedbackMessage("Type new coordinates (format: x,y) or press x to cancel");
//	input = getUserOption();
//	if (input == "x")
//	{
//		displayFeedbackMessage("Canceling character movement");
//	}
//	else
//	{
//		if (input.length() < 3)
//		{
//			displayFeedbackMessage("Wrong coordinates");
//			displayFeedbackMessage("Character movement aborted");
//			displayFeedbackMessage("Character created on default position (25,25)");
//		}
//		else
//		{
//			displayFeedbackMessage("Moving character");
//			std::string delimiter = ",";
//			size_t pos = 0;
//			std::string token;
//			while ((pos = input.find(delimiter)) != std::string::npos) {
//				token = input.substr(0, pos);
//				input.erase(0, pos + delimiter.length());
//			}
//			std::stringstream coordX{ token }, coordY{ input };
//			std::pair<int, int> coords{};
//			coordX >> coords.first;
//			coordY >> coords.second;
//			currWorkingChar->changeEntityPosition(activeMaps.back(), coords);
//		}
//	}
//}

void enQueueCombat()
{
	std::list<Character*> tempActiveCharacters{ activeCharacters };
	while (!tempActiveCharacters.empty())
	{
		if (rand()%2)
		{
			combatQueue.push_back(tempActiveCharacters.front());
			tempActiveCharacters.pop_front();
		}
		else
		{
			combatQueue.push_back(tempActiveCharacters.back());
			tempActiveCharacters.pop_back();
		}
	}
}

void displayCombatQueue()
{
	std::cout << '\n';
	std::cout << "Combat Order: ";
	std::list <Character*> :: iterator iter;
	for (iter = combatQueue.begin(); iter != combatQueue.end(); iter++)
	{
		Character* currCharacter = *iter;
		std::cout << currCharacter->getEntityID() << ' ';
	}
	std::cout << '\n';
}

void displayAvailableMoves()
{
	//displayFeedbackMessage("1.\t");
	std::list <std::string> :: iterator iter;
	for (iter = currWorkingChar->getPowers().begin(); iter != currWorkingChar->getPowers().end(); iter++)
	{
		std::cout << "hi\n";
		std::string currString{ *iter };
		std::cout << currString << ' ';
	}
	
}

void resolveCombatMove(const std::string &power)
{
	power;
}

void resolveCombatAttack()
{
	std::string input;
	displayFeedbackMessage("Choose move from list of available moves: ");
	displayAvailableMoves();
	input = getUserOption();
}

std::string getUserOption()
{
	std::cout << "Awaiting input (whitespace characters are ignored): ";
	std::string input{};
	std::cin >> input;
	return input;
}

void diceobuSystemCore(std::string input,const int &coordX, const int &coordY, const std::string &cName, const std::string &cClass,
                       const std::string &cRace, const std::string &cAlignment,
                       const std::string &cBackground, const int &cBalance, const int &cLevel)
{
    //LobbyWindow lb;
    Map* previousMap;// = currWorkingMap;
    Character *previousCharacter;// = currWorkingChar;
    int currWorkingCharID = 0;
    std::string currWorkingCharName = "Name";
    std::string previousMapName;
    std::string previousCharacterName;

	if (input == "1")
	{
        createNewMap();

		currWorkingMap->writeMap();

        initPixmapArray(); // Refresh map
       // LobbyWindow lw;
       // lw(new Ui::LobbyWindow)

        emit mui->refreshCurrent();

        //// qDebug() << "was here2";
         //qDebug() << "mainDep 503///"
               //   << QString::fromStdString(input)
               //   << currWorkingMap->getMapID()
                  //<< currWorkingChar->getEntityID()
               //   << "Map ID" << previousMap->getMapID()
                //  << "Trash Char ID" << previousCharacter->getEntityID()
                 // << coordX << coordY
                   //  ;

       // emit mui->updateLog(input, currWorkingMap);
       // // qDebug() << "mainDep 499///" << QString::fromStdString(input) << currWorkingMap->getMapID() << currWorkingChar->getEntityID()
       //          << previousMap->getMapID() << previousCharacter->getEntityID() << coordX << coordY;
         emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap, previousMapName, previousCharacter, previousCharacterName, coordX,coordY);

        //LobbyWindow::displayCurrent();
        //QMessageBox::information(&lw,"Success","Map created successfully.");//	update currWorkingMap box
		//	displayFeedbackMessageUI("Map created");
	}
    else if (input == "2") // Create Character
	{
        if (activeMaps.empty())
		{
			//	displayFeedbackMessageUI("Cannot create character without a map");
			emit mui->errorMessage(1);
		}
		else
		{
            int notcreated = characterCreation(cName,cClass,cRace,cAlignment,cBackground,cBalance,cLevel,coordX,coordY);
            if (notcreated)
			{
				//displayFeedbackMessageUI("Could not create character");
			}
			else
			{
				//displayFeedbackMessageUI("New character created");
                currWorkingMap->writeMap();
                initPixmapArray();
                emit mui->refreshCurrent();
                currWorkingCharID = currWorkingChar->getEntityID();
                currWorkingCharName = currWorkingChar->getName();

                if (muteLog != 1)
                {
                emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap,
                                    previousMapName, previousCharacter, previousCharacterName, coordX,coordY);
                }
			}
		}
	}
	else if (input == "3")	// Move Character
	{
        if (currWorkingMap->m_containingCharacters.empty())
		{
			//displayFeedbackMessageUI("No character found"); // Done in UI		
		}
		else
		{
            moveCurrentCharacterUI(coordX, coordY);
			currWorkingMap->writeMap();

			//	refresh map
            initPixmapArray();
            mui->refreshCurrent();
            currWorkingCharID = currWorkingChar->getEntityID();
            currWorkingCharName = currWorkingChar->getName();
            if (directionalMovement == 0)
            {
            emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap,
                                previousMapName, previousCharacter, previousCharacterName, coordX,coordY);
            }
            else
            {
                 directionalMovement = 0;
            }
		}
	}
	else if (input == "4")
	{
		if (activeCharacters.empty())
		{
			//displayFeedbackMessageUI("No characters found");
		}
		else
		{
			if (inCombat)
			{
				inCombat = false;
				combatQueue.clear();
				//displayFeedbackMessageUI("Combat ended");
			}
			else
			{
				inCombat = true;
				enQueueCombat();
				//displayFeedbackMessageUI("Combat started");
				//displayCombatQueueUI();
				resolveCombatMove("power");
			}
		}
	}
	else if (input == "5")
	{
		//displayInfoUI(); // Help
	}
	else if (input == "6")
	{
		if (activeMaps.empty())
		{
			//displayFeedbackMessageUI("Nothing to display");
		}
		else
		{
			//displayActiveMapsUI();
		}
	}
	else if (input == "7")
	{
		if (activeCharacters.empty())
		{
			//displayFeedbackMessageUI("Nothing to display");
		}
		else
		{
			//displayActiveCharactersUI();
		}
	}
	else if (input == "8")
	{
		if (activeMaps.empty())
		{
			mui->errorMessage(2); //            QMessageBox::warning(&lb,"Error!","Nothing to delete!");
		}
		else
		{
			if (currWorkingMap->m_containingCharacters.empty())
			{
                previousMap = currWorkingMap;
                previousMapName = currWorkingMap->getMapName();
				deleteCurrentMap();

                //mapIDCounter--;
				if (!activeMaps.empty())
				{
					currWorkingMap->writeMap();
					// update currWorkingMap box
                    emit mui->refreshCurrent();
                }
				else
				{
					//	change currWorkingMap box to empty
                    emit mui->refreshCurrent();
				}
				//	refresh map
                initPixmapArray();

                emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap,
                                    previousMapName, previousCharacter, previousCharacterName, coordX,coordY);
				//	displayFeedbackMessageUI("Selected map deleted");
               // QMessageBox::information(&lb,"Success.","Map deleted.");
			}
			else
			{
				//displayFeedbackMessageUI("Cannot delete map containing characters");
				mui->errorMessage(3); //                QMessageBox::critical(&lb,"Error!","Cannot delete a Map containing characters!");
			}
		}
	}
	else if (input == "9")
	{
		if (activeCharacters.empty())
		{
			//	displayFeedbackMessageUI("Nothing to delete");
			mui->errorMessage(2); //  QMessageBox::warning(&lb,"Error!","Nothing to delete!");
		}
		else
        {
            previousCharacter = currWorkingChar;
            previousCharacterName = currWorkingChar->getName();
			deleteCurrentCharacter();
			if (!activeCharacters.empty())
			{
				// update currWorkingChar box
                emit mui->refreshCurrent();
			}
			else
			{
				//	change currWorkingChar box to empty
                emit mui->refreshCurrent();
			}
			currWorkingMap->writeMap();
			//	refresh map
            initPixmapArray();
            emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap,
                                previousMapName, previousCharacter, previousCharacterName, coordX,coordY);        }
	}
	else if (input == "10")
	{
		if (activeMaps.empty())
		{
			// displayFeedbackMessageUI("No maps found");
            mui->errorMessage(4); // 	QMessageBox::critical(&lb, "Error!", "No Maps found!");
		}
		else
		{
            previousMap = currWorkingMap;
			chooseNextMap();
			currWorkingMap->writeMap();
			//	refresh map
            initPixmapArray();
			// update currWorkingMap box
            emit mui->refreshCurrent();
            emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap,
                                previousMapName, previousCharacter, previousCharacterName, coordX,coordY);		
		}
	}
	else if (input == "11")
	{
		if (activeCharacters.empty())
		{
			// displayFeedbackMessageUI("no chars found");
			mui->errorMessage(5);	//	QMessageBox::critical(&lb,"Error!","No Characters found!");
		}
		else
		{
            previousCharacter = currWorkingChar;
			chooseNextCharacter();
			currWorkingMap->writeMap();
			//	refresh map
            initPixmapArray();
			// update currWorkingMap box
			// update currWorkingChar box
            emit mui->refreshCurrent();
            currWorkingCharID = currWorkingChar->getEntityID();
            currWorkingCharName = currWorkingChar->getName();
            emit mui->updateLog(input,currWorkingMap,currWorkingCharID, currWorkingCharName, previousMap,
                                previousMapName, previousCharacter, previousCharacterName, coordX,coordY);		}
	}
	else if (input == "12")
	{
		//	displayCombatQueueUI();
	}
	else if (input == "13")
	{
		if (activeMaps.empty())
		{
		// displayFeedbackMessageUI("No maps found");
			mui->errorMessage(4); //QMessageBox::critical(&lb, "Error!", "No Maps found!");
		}
		else
		{
			previousMap = currWorkingMap;
			jumpToMap(targetMapID);
			currWorkingMap->writeMap();
			//	refresh map
			initPixmapArray();
			// update currWorkingMap box
			emit mui->refreshCurrent();
			emit mui->updateLog(input, currWorkingMap, currWorkingCharID, currWorkingCharName, previousMap,
				previousMapName, previousCharacter, previousCharacterName, coordX, coordY);
		}
	}
	else if (input == "14")
	{
		if (activeCharacters.empty())
		{
			// displayFeedbackMessageUI("no chars found");
            mui->errorMessage(5); //    QMessageBox::critical(&lb, "Error!", "No Characters found!");
		}
		else
		{
			previousCharacter = currWorkingChar;
			jumpToCharacter(targetCharacterID);
			currWorkingMap->writeMap();
			//	refresh map
			initPixmapArray();
			// update currWorkingMap box
			// update currWorkingChar box
			emit mui->refreshCurrent();
			currWorkingCharID = currWorkingChar->getEntityID();
			currWorkingCharName = currWorkingChar->getName();
			emit mui->updateLog(input, currWorkingMap, currWorkingCharID, currWorkingCharName, previousMap,
				previousMapName, previousCharacter, previousCharacterName, coordX, coordY);
		}
	}
	else if (input == "a")
	{
		if(inCombat)
		{
			resolveCombatMove("power");
		}
		else
		{
			//	displayFeedbackMessageUI("Not in combat");
		}
	}
	else if (input == "x")
	{
		activeMaps.clear();
		activeCharacters.clear();
		combatQueue.clear();
		//	Qt function calls to terminate session
	}
}


