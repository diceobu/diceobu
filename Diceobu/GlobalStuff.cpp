/* This is the Global Stuff Source file.
 * It contains the definitions of
  * Global Functions.
 */

//	User Libraries
#include "GlobalStuff.h"
//	Standard Libraries
#include <iostream>
#include <string>

void clearScreen()
{
	std::cout << "\033[2J\033[1;1H";
}

void displayWelcomeMessage()
{
	std::cout << "Welcome to Dfireobu also known as Diceobu Jr, or Diceobu's younger sibling.\n"
		<< "Dfireobu is nothing like Diceobu.\n"
		<< "It's just a platform that will guide you through the basic features Diceobu will have to offer.\n\n";
}

void displayAvailableOptions()
{
	std::cout << "List of available tools (select one):\n";
	std::cout << "1. Create new Default Map\n"
		<< "2. Create new Default Character\n"
		<< "3. Move existing character\n"
		<< "4. Display help information\n"
		<< "x. Exit\n";
	displayActiveMaps();
	displayActiveEntities();
}

void displayActiveMaps()
{

}

void displayActiveEntities()
{

}

void createNewMap()
{

}

void enterMainLoop()
{
	displayAvailableOptions();
	while (1)
	{
		std::string input{};
		std::cin >> input;
		if (input == "1")
		{
			clearScreen();
			displayAvailableOptions();
			std::cout << "\n\t\t\tCreating new map\n";
			createNewMap();
		}
		else if (input == "2")
		{
			clearScreen();
			displayAvailableOptions();
			std::cout << "\n\t\t\tCreating new character\n";
		}
		else if (input == "3")
		{
			clearScreen();
			displayAvailableOptions();
			std::cout << "\n\t\t\tMoving Character\n";
		}
		else if (input == "4")
		{
			clearScreen();
			displayAvailableOptions();
			std::cout << "\n\t\t\tDispling information\n";
		}
		else if (input == "x")
		{
			clearScreen();
			displayAvailableOptions();
			std::cout << "\n\t\t\tExiting\n";
			break;
		}
		else
		{
			clearScreen();
			displayAvailableOptions();
			std::cout << "\n\t\t\tUnrecognised command\n";
		}
	}
}
