/* This is the main file of this test tool
 * that contains the main function.
 */

//	User Libraries
#include "GlobalVariables.h"
#include "DiceobuLibrary.h"
#include "main.h"
//	Standard Libraries
#include <iostream>
#include <string>
#include <list>
#include <iterator>

//	Global Structures
static std::list<Map> activeMaps;

static std::list<Character> activeCharacters;

//	<------------------------------------------------ main starting point
int main()
{
	displayWelcomeMessage();
	system("pause");

	simLaunch();

	return 0;
}
//	<------------------------------------------------ main end point

void clearScreen()
{
	std::cout << "\033[2J\033[1;1H";
}

void displayWelcomeMessage()
{
	std::cout	<< "Welcome to Dfireobu also known as Diceobu Jr, or Diceobu's younger sibling.\n"
				<< "Dfireobu is not a complete game.\n"
				<< "It's just a platform that will guide you through the basic features Diceobu will have to offer.\n"
				<< "Most of the available options will be automated in the final product.\n"
				<< "Here you can take control of them to freely explore and test their behavior.\n"
				<< "Fullscreen view is recommended.\n";
}

void displayAvailableOptions()
{
	std::cout	<< "List of available options (select one of the numbers/symbols and hit enter):\n";
	std::cout	<< "1. Create new Default Map\n"
				<< "2. Create new Default Character\n"
				<< "3. Move existing character\n"
				<< "4. Start/End combat\n"
				<< "5. Display help information\n"
				<< "6. Display all active Maps\n"
				<< "7. Display all active Characters\n"
				<< "8. Delete first active Map\n"
				<< "9. Delete first active Character\n"
				<< "x. Exit\n";
}

void displayFeedbackMessage(std::string message)
{
	std::cout << '\n' << '\t' << '\t' << '\t'
		<< message << '\n';
}

void displayActiveMaps()
{
	std::list <Map> :: iterator iter;
	for (iter = activeMaps.begin(); iter != activeMaps.end(); iter++)
	{
		std::cout << '\n';
		Map currMap = *iter;
		currMap.printMap();
		std::cout << '\n';
	}
}

void displayActiveCharacters()
{
	std::list <Character> ::iterator iter;
	for (iter = activeCharacters.begin(); iter != activeCharacters.end(); iter++)
	{
		std::cout << '\n';
		Character currCharacter = *iter;
		currCharacter.printCharacter();
		std::cout << '\n';
	}
}

void createNewMap()
{
	Map newMap("Castle of Belithriell", 50, 50, mapIDCounter++, "none");
	activeMaps.push_back(newMap);
}

void deleteFirstActiveMap()
{
	//Map *tempMap{ &activeMaps.front() };
	activeMaps.pop_front();
	//tempMap->~Map();
	//std::cout << "object still exists: " << tempMap->getMapID();
}

void createNewCharacter(Map &currMap)
{
	Character newCharacter("jeff", 50, 30, 20, "large", 24, 22, characterIDCounter++, { 0, 0 }, currMap, 11, "powers", 2, "fighter",
		"lawful trash", "some vest", 20, 50000, "human", "some langs", 0, "tourash", "none", -1, -5);
	activeCharacters.push_back(newCharacter);
	currMap.m_containingCharacters.push_back(newCharacter.getEntityID());
}

void deleteFirstActiveCharacter()
{
	//Character tempChar{ activeCharacters.front() };
	activeCharacters.front().getCurrMap().m_containingCharacters.remove(activeCharacters.front().getEntityID());
	activeCharacters.pop_front();
	//tempChar->~Character();
	//std::cout << "object still exists: " << tempChar->getEntityID();
}

std::string getUserOption()
{
	std::cout << "Awaiting input (press h to display the list of available options): ";
	std::string input{};
	std::cin >> input;
	return input;
}

void simLaunch()
{
	clearScreen();
	displayAvailableOptions();
	std::string input{};
	while (1)
	{
		input = getUserOption();
		clearScreen();
		displayAvailableOptions();
		if (input == "1")
		{
			displayFeedbackMessage("Creating map");
			createNewMap();
			clearScreen();
			displayAvailableOptions();
			displayFeedbackMessage("New map created");
		}
		else if (input == "2")
		{
			if (activeMaps.empty())
			{
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("Cannot create character without a map");
			}
			else
			{
				displayFeedbackMessage("Creating new character");
				createNewCharacter(activeMaps.back());
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("New character created");
			}
		}
		else if (input == "3")
		{
			displayFeedbackMessage("Moving character");
			clearScreen();
			displayAvailableOptions();
		}
		else if (input == "4")
		{
			if (inCombat)
			{
				displayFeedbackMessage("Ending combat");
				inCombat = false;
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("Combat ended");
			}
			else
			{
				displayFeedbackMessage("Starting combat");
				inCombat = true;
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("Combat started");
			}
		}
		else if (input == "5")
		{
			displayFeedbackMessage("Displaying additional information");
			clearScreen();
			displayAvailableOptions();
		}
		else if (input == "6")
		{
			displayFeedbackMessage("Displaying all active maps");
			clearScreen();
			displayActiveMaps();
			displayAvailableOptions();
		}
		else if (input == "7")
		{
			displayFeedbackMessage("Displaying all active characters");
			clearScreen();
			displayActiveCharacters();
			displayAvailableOptions();
		}
		else if (input == "8")
		{
			if (activeMaps.empty())
			{
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("Nothing to delete");
			}
			else
			{
				displayFeedbackMessage("Deleting first active map");
				deleteFirstActiveMap();
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("First active map deleted");
			}
		}
		else if (input == "9")
		{
			if (activeCharacters.empty())
			{
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("Nothing to delete");
			}
			else
			{
				displayFeedbackMessage("Deleting first active character");
				deleteFirstActiveCharacter();
				clearScreen();
				displayAvailableOptions();
				displayFeedbackMessage("First active character deleted");
			}
		}
		else if (input == "x")
		{
			displayFeedbackMessage("Exiting");
			activeMaps.clear();
			activeCharacters.clear();
			clearScreen();
			displayFeedbackMessage("Application exited");
			break;
		}
		else
		{
			displayFeedbackMessage("Unrecognized command");
		}
	}
}

// #################################################################################################################################################
// #DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER#
// #################################################################################################################################################
// #DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER#
// #################################################################################################################################################
// #DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER DUMBSTER#
// #################################################################################################################################################

// #################################################################################################################################################
	//Power A{ "kappa", 4, "keepo", "123", 69, "coldaf", true, 6969, "almost square" };
	//Spell B("kappa1", 5, "keepo1", "1234", 69, "coldaf", true, 6969, "almost square", 40, "wholeftime", 50, true, true, "fire stuff", 100);
	//Item C(4, "item desc", "rarity", 696969);
	//Usable D(5, "new item desc", "more rarity", 1141, 7, "warrior", 10);
	//Equipment E(4, "item desc", "rarity", 696969, "req", 20, "effect");
	//Weapon F(34, "dwad", "f213t", 141, "11e", 14, "1414", 11);
	//Map G("map1", 44, 1421, "fire&ice");
	//Tile H("map1", 40, 124124, 1414, "hard", "ice", true);
	//Campaign I("camp name", 2, 5, "map1>map2>map3", "desc");
	//Entity J("jeff", 50, 30, 20, "large", 24, 22, 11, 15151);
	//Object K("jeff", 50, 30, 20, "large", 24, 22, 11, 15151);
	//Obstacle L("jeff", 50, 30, 20, "large", 24, 22, 11, 15151, "rock");
	//Character M("jeff", 50, 30, 20, "large", 24, 22, 11, 15151, 15, "powers", 2, "fighter", "lawful trash", "some vest", 20, 50000, "human",
	//	"some langs", 0, "tourash", "none", -1, -5);
	//DungeonMaster N(1515, "some name", "wqdwad", "awd@dwad.wdad", "list of chars", "some camps", true, "prefs", "no friends", "gamehist");
	//Player O(1515, "some name", "wqdwad", "awd@dwad.wdad", "list of chars", "some camps", false, "prefs", "no friends", "gamehist");

	//std::cout << '\n' << "The following messages are just a test:" << '\n';
	//std::cout << B.getName() << '\n' << B.getCastingTime() << '\n' << C.getDescription() << '\n' << D.getClassReq() << '\n'
	//	<< E.getPassiveEffect() << '\n' << E.getLevelReq() << '\n' << F.getDamage() << '\n' << G.getMapEffects() << '\n'
	//	<< H.getTileID() << '\n' << H.getOpen() << '\n' << I.getName() << '\n' << I.getCampaignID() << '\n' << I.getOrderOfMaps()
	//	<< '\n' << J.getArmorClass() << '\n' << K.getEntityID() << '\n' << L.getMaterial() << '\n' << M.getAlignment() << '\n'
	//	<< M.getVisionRange() << '\n' << N.getFriendList() << '\n' << N.getIsDungeonMaster() << '\n' << O.getOngoingCamps() << '\n'
	//	<< O.getIsDungeonMaster() << '\n';
// #################################################################################################################################################