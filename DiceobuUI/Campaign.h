/* This is the Campaign class header file.
 * It contains the definition of the Campaign
 * class along with it's Getters and Setters Functions.
 * It also contains the Campaign class constructor declarations
 * and the declaration of other Functions.
 */

#pragma once

//	User Libraries

//	Standard Libraries
#include <string>

class Campaign
{
//	Member Variables
protected:
	std::string	m_name;
	int			m_campaignID;
	int			m_numOfMaps;
	std::string	m_orderOfMaps;
	std::string m_description;
//	Member Functions
public:
//	Constructors
	Campaign(const std::string	&name,			const int			&campaignID,
			 const int			&numOfMaps,		const std::string	&orderOfMaps,
			 const std::string	&description);
//	Access Functions
//	Getters
	const std::string getName()			{ return m_name; }
	const int		  getCampaignID()	{ return m_campaignID; }
	const int		  getNumOfMaps()	{ return m_numOfMaps; }
	const std::string getOrderOfMaps()	{ return m_orderOfMaps; }
	const std::string getDescription()	{ return m_description; }
//	Setters
	void setName(const std::string &name)				{ m_name = name; }
	void setCampaignID(const int &campaignID)			{ m_campaignID = campaignID; }
	void setNumOfMaps(const int &numOfMaps)				{ m_numOfMaps = numOfMaps; }
	void setOrderOfMaps(const std::string &orderOfMaps)	{ m_orderOfMaps = orderOfMaps; }
	void setDescription(const std::string &description) { m_description = description; }
//	Others
};
