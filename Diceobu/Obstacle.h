/* This is the Obstacle class header file.
 * It contains the definition of the Obstacle
 * class along with it's Getters and Setters Functions.
 * It also contains the Obstacle class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Object.h"
//	Standard Libraries
#include <string>

class Obstacle : public Object
{
//	Member Variables
public:
//	public Member Variables
protected:
	std::string	m_material;
private:
//	private Member Variables

//	Member Functions
public:
//	Constructors
	Obstacle(	const std::string	&name,		const int			&hitPoints,
				const int			&overheal,	const int			&armorClass,
				const std::string	&size,		const int			&height,
				const int			&weight,	const int			&entityID,	
				const std::pair<int, int>	&coordinates, Map*		&currMap,
				const std::string	&material);
//	Access Functions
//	Getters
	std::string	getMaterial() { return m_material; }
//	Setters
	void setMaterial(const std::string &material) { m_material = material; }
//	Others
};
