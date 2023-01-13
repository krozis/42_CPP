# include "Weapon.hpp"

int	Weapon::getDmgValue(void) const
{
	return (m_dmg);
}

std::string	Weapon::getName(void) const
{
	return (m_name);
}

void	Weapon::changeWeapon(std::string name, int dmg)
{
	m_name = name;
	m_dmg = dmg;
}

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/NSTRUCTOR - DESTRUCTOR

Weapon::Weapon(std::string name, int dmg):
	m_name(name), m_dmg(dmg)
{
	std::cout << "-----Created " << this->m_name << " doing " << this->m_dmg << " damages!" << std::endl;
}


Weapon::~Weapon(void)
{
	std::cout << "-----Destruction of " << this->m_name << std::endl;
}
