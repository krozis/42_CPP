#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class Claptrap
{
	public:
		Claptrap(std::string name);
		Claptrap(Claptrap const &toCopy);
		~Claptrap();
		Claptrap	&operator=(Claptrap const &toAssign);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_mp;
		unsigned int	_dmg;
};

#endif