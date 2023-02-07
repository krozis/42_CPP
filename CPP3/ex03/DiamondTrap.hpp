#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string const &name);
		virtual ~DiamondTrap();
		DiamondTrap(DiamondTrap const &toCopy);
		DiamondTrap &operator=(DiamondTrap const &toAssign);

		using
			ScavTrap::attack;
		void	whoAmI() const;

	private:
		std::string	_name;
};

#endif