#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &toCopy);
		virtual ~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &toAssign);

		void	attack(std::string const &target);
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