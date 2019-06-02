/* This is the Power class source file.
 * It contains the definition of the
 * Power class Constructor and other
 * Member Functions.
 */

//	User Libraries
#include "Power.h"
#include "mainDependancies.h"
//	Standard Libraries
#include <string>
#include <list>
#include <QStringList>
#include <fstream>


//	Constructors
Power::Power(const std::string &name,			const int &levelReq,		const std::string &ofClass,
			 const std::string &description,	const int &range,			const std::string &damageType,
			 const bool		   &cMaterial,		const int &materialList,	const std::string &aoe,
			 const int		   &baseDamage)
	: m_name{ name },				m_levelReq{ levelReq },			m_ofClass{ ofClass },
	  m_description{ description },	m_range{ range },				m_damageType{ damageType },
	  m_cMaterial{ cMaterial },		m_materialList{ materialList }, m_aoe{ aoe },
	  m_baseDamage{ baseDamage }
{}
//	Others

std::list<Power*> powerList;

void initializePowerList()
{
    std::ifstream infile("powers.dat");
    std::string line;
    std::list <std::string> tokenList;
    std::list <std::string> lineList;
    std::string token;
    std::string previousToken = "reserved";
    QStringList tempQSL;

    std::string pname;
    int         plevelReq;
    std::string pofClass;
    std::string pdescription;
    int         prange;
    std::string pdamageType;
    bool		pcMaterial;
    int         pmaterialList;
    std::string paoe;
    int         pbaseDamage;

    int i = 0;

    while (std::getline(infile, line))
    {
        lineList.push_back(line);       // Get each line in lineList
    }


    std::list <std::string> :: iterator iter2;
    for(iter2 = lineList.begin(); iter2 != lineList.end(); iter2++)
    {
        token = *iter2;
        tempQSL = QString::fromStdString(token).split(" : ");               // Split each line by " = " and push tokens in tokenList
        for (int j=0; j<tempQSL.size();j++)
        {
            tokenList.push_back(tempQSL.at(j).toStdString());
        }
    }


    std::list <std::string> :: iterator iter;                               // Parse tokenList of form Tag, Value, Tag, Value...
    for(iter = tokenList.begin(); iter != tokenList.end(); iter++)
    {
        token = *iter;
        if (previousToken == "reserved") // token has a tag
        {
            previousToken = token;
            pname = token;
        }
        else                            // token has a value
        {
            tempQSL = QString::fromStdString(token).split(", ");               // Split each line by " = " and push tokens in tokenList
            plevelReq       =   tempQSL.at(i).toInt();
            i++;
            pofClass        =   tempQSL.at(i).toStdString();
            i++;
            pdescription    =   tempQSL.at(i).toStdString();
            i++;
            prange          =   tempQSL.at(i).toInt();
            i++;
            pdamageType     =   tempQSL.at(i).toStdString();
            i++;
            pcMaterial      =   tempQSL.at(i).toStdString() == "true" ? true : false;
            i++;
            pmaterialList   =   tempQSL.at(i).toInt();
            i++;
            paoe            =   tempQSL.at(i).toStdString();
            i++;
            pbaseDamage     =   tempQSL.at(i).toInt();
            i++;

            i = 0;
            previousToken = "reserved";
            powerList.push_back(new Power(pname,plevelReq,pofClass,pdescription,prange,pdamageType,pcMaterial,pmaterialList,paoe,pbaseDamage));
        }
    }
}
