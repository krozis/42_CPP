#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const &name );
		FragTrap(FragTrap const &toCopy);
		~FragTrap();

		FragTrap &operator=(FragTrap const &toAssign);

		void	highFiveGuys();
	private:

};

#endif