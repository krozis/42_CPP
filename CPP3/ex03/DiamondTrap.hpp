#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

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

		void	whoAmI() const;

		using	ScavTrap::attack;

	private:
		std::string	_name;
};

#endif