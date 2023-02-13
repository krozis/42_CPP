#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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