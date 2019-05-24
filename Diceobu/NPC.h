/* This is the NPC class header file.
 * It contains the definition of the NPC
 * class along with it's Getters and Setters Functions.
 * It also contains the NPC class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries
#include "Character.h"
//	Standard Libraries
#include <string>

class NPC : public Character
{
	//	Member Variables
public:
	//	public Member Variables
protected:
	std::string  m_dialogTable;
	std::string	 m_itemList;
	std::string	 m_questList;
private:
	//	private Member Variables

	//	Member Functions
public:
	//	Constructors
	NPC(	const std::string	&name,			const int			&hitPoints,
			const int			&overheal,		const int			&armorClass,
			const std::string	&size,			const int			&height,
			const int			&weight,		const int			&entityID,
			const std::pair<int, int>	&coordinates, Map*			&currMap,
			const int			&abilityScores,	const std::string	&powers,
			const int			&speed,			const std::string	&cClass,		const std::string	&alignment,
			const std::string	&equipment,		const int			&level,			const int			&exp,
			const std::string	&race,			const std::string	&languages,		const int			&balance,
			const std::string	&background,	const std::string	&proficiency,	const int			&visionRange,
			const int			&reach,
			const std::string	&dialogTable,	const std::string	&itemList,		const std::string	&questList);
	//	Access Functions
	//	Getters
	const std::string	getDialogTable()	{ return m_dialogTable; }
	const std::string	getItemList()		{ return m_itemList; }
	const std::string	getQuestList()		{ return m_questList; }
	//	Setters
	void setDialogTable(const std::string &dialogTable)	{ m_dialogTable = dialogTable; }
	void setItemList(const std::string &itemList)		{ m_itemList = itemList; }
	void setQuestList(const std::string &questList)		{ m_questList = questList; }
	//	Others
};
