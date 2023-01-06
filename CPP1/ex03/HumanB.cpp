#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacked with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " wanted to attack but has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
