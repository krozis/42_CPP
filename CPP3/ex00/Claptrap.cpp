#include "Claptrap.hpp"

//CONSTRUCTORS

Claptrap::Claptrap(std::string name): _name(name), _hp(10), _mp(10), _dmg(0)
{
	std::cout << "Claptrap " << _name << " has been created" << std::endl;
}

Claptrap::Claptrap(Claptrap const &toCopy)
{
	_name = toCopy._name;
	_hp = toCopy._hp;
	_mp = toCopy._mp;
	_dmg = toCopy._dmg;
	std::cout << "Claptrap " << _name << " has been cloned" << std::endl;
}

Claptrap::~Claptrap()
{
	std::cout << "Claptrap " << _name << " has been destroyed (thanks)" << std::endl;
}

Claptrap	&Claptrap::operator=(Claptrap const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
	}
	return (*this);
}

//PUBLIC

void	Claptrap::attack(const std::string& target)
{
	if (_mp && _hp)
	{
		std::cout << "Claptrap " << _name << " attacks " << target 
		<< " causing " << _dmg << "pts of damage!" << std::endl;
		_mp--;
	}
	else if (_hp && !_mp)
		std::cout << "Claptrap " << _name << " has not enough energy points!" << std::endl;
	else
		std::cout << "Claptrap " << _name << " has no HP left!" << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		std::cout << "Claptrap " << _name << " is already broken!" << std::endl;
	else
	{
		if (amount >= _hp)
			_hp = 0;
		else
			_hp -= amount;
		std::cout << "Claptrap " << _name << " took " << amount << " damages!"
		" It now has " << _hp << "HP left." << std::endl;
		if (_hp == 0)
			std::cout << _name << " is broken..!" << std::endl;
	}
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (_mp && _hp)
	{
		_hp += amount;
		if (_hp > 10)
			_hp = 10;
		std::cout << "Claptrap " << _name << " regained " << amount << "HP. "
		<< "It now has " << _hp << "HP." << std::endl;
		_mp--;
	}
	else if (_hp && !_mp)
		std::cout << "Claptrap " << _name << " has not enough energy points!" << std::endl;
	else
		std::cout << "Claptrap " << _name << " has no HP left!" << std::endl;
}
