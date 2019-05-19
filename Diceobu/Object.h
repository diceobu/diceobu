/* This is the Object class header file.
 * It contains the definition of the Object
 * class along with it's Getters and Setters Functions.
 * It also contains the Object class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Entity.h"
//	Standard Libraries
#include <string>

class Object : public Entity
{
//	Member Variables
//	Member Functions
public:
//	Constructors
	Object(	const std::string	&name,		const int	&hitPoints,
			const int			&overheal,	const int	&armorClass,
			const std::string	&size,		const int	&height,
			const int			&weight,	const int	&entityID,
			const std::pair<int, int>	&coordinates, const Map		&currMap);
//	Access Functions
//	Getters
//	Setters
//	Others
};
