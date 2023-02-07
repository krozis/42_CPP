#include "Dude.hpp"

Dude::Dude(std::string name): _hp(100), _name(name)
{
	std::cout << name << " created" << std::endl;
}

Dude::~Dude()
{
	std::cout << _name << " destroyed" << std::endl;
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Dude::takeDmg(unsigned int dmg)
{
	if (_hp == 0)
		std::cout << _name << " is aready dead." << std::endl;
	else if (dmg >= _hp)
	{
		_hp = 0;
		std::cout << _name << " has no more HP and died." << std::endl;
	}
	else 
	{
		_hp -= dmg;
		std::cout << _name << " has now " << _hp << "HP left." << std::endl;
	}
}


void	Dude::hit(Dude &target) const
{
	std::cout << _name << " hits " << target._name << "." << std::endl;
	target.takeDmg(10);
}
