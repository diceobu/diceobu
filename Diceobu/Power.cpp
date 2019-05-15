#include <iostream>
#include "Power.h"

Power::Power(const std::string &name,			const int &levelReq,		const std::string &ofClass,
			 const std::string &description,	const int &range,			const std::string &damageType,
			 const bool		   &cMaterial,		const int &materialList,	const std::string &aoe)
	: m_name{ name },				m_levelReq{ levelReq },				m_ofClass{ ofClass },
	m_description{ description },	m_range{ range },					m_damageType{ damageType },
	m_cMaterial{ cMaterial },		m_materialList{ materialList },		m_aoe{ aoe }
{}

const void Power::printAll()
{
	std::cout << "list of all items!";
}