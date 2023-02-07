#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap();
		ScavTrap(ScavTrap const &toCopy);
		ScavTrap &operator=(ScavTrap const &toAssign);

		void	attack(std::string const &target);
		void	guardGate();
};

#endif