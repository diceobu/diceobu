/* This is the main file of this test tool
 * that contains the main function.
 */

//	User Libraries
#include "DiceobuLibrary.h"
#include "GlobalVariables.h"
//	Standard Libraries
#include <iostream>
#include <string>

int main()
{
	std::cout << "Welcome to Dfireobu also known as Diceobu Jr, or Diceobu's younger sibling.\n"
		<< "Dfireobu is nothing like Diceobu.\n"
		<< "It's just a platform that will guide you through the basic features Diceobu will have to offer.\n";

	std::cout << "\nExample test\n";

	Map G("Belithriell Castle", mapSize, mapSize, 1421, "fire&ice");
	Entity A("jeff", 50, 30, 20, "large", 24, 22, 15151, { 5, 6 });

	std::cout << A.getCoordinates().first << " " << A.getCoordinates().second << '\n';
	A.changeEntityPosition({ 10, 11 });
	std::cout << A.getCoordinates().first << " " << A.getCoordinates().second << '\n';

	return 0;
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