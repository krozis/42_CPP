#include "Personnage.hpp"
#include "Weapon.hpp"


std::string	Personnage::getName() const
{
	return (m_name);
}

void	Personnage::takeDmg(int dmg)
{
	std::cout << m_name << " took " << dmg << " damages." << std::endl;
	m_hp -= dmg;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << m_name << " has now " << m_hp << "HP left." << std::endl;
	if (!this->isAlive())
		std::cout << m_name << " is dead." << std::endl;
}

void	Personnage::attack(Personnage &target) const
{
	std::cout << m_name << " attacked " << target.getName() << "." << std::endl;
	target.takeDmg(m_weapon.getDmgValue());
}

void	Personnage::drinkPotion(int potionValue)
{
	std::cout << m_name << " drank a potion and gained " << potionValue << "HP." << std::endl;
	m_hp += potionValue;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name << " has now " << m_hp << "HP." << std::endl;
}

void	Personnage::changeWeapon(Weapon &new_weapon)
{
	m_weapon = new_weapon;
	std::cout << this->m_name << " changed weapon to " << m_weapon.getName() << "." << std::endl;
}

bool	Personnage::isAlive() const
{
	return (m_hp > 0);
}

//CONSTRUCTOR - DESTRUCTOR

Personnage::Personnage(std::string name, int hp, Weapon &weapon):
	m_name(name), m_max_hp(hp), m_weapon(weapon)
{
	m_hp = m_max_hp;
	//std::cout << "-----Created " << m_name << " with " << this->m_hp << "HP." << std::endl;

};

Personnage::~Personnage(void)
{
	//std::cout << "-----Destruction de " << this->m_name << std::endl;
}
