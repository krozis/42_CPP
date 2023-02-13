#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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