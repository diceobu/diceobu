#pragma once

//    User Libraries
#include "GlobalVariables.h"
#include "Map.h"
#include "Character.h"
#include "mapwidget.h"
//    Standard Libraries
#include <string>

//    Global Functions



int loadPlayerCharacter(std::string saveFilepath);
int savePlayerCharacter();

