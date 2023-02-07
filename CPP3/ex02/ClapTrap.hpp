#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &toCopy);
		~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &toAssign);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_mp;
		unsigned int	_dmg;

	private:
};

#endif