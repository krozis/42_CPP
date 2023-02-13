#ifndef WARRIOR_HPP
# define WARRIOR_HPP

# include "Dude.hpp"

class Warrior: public Dude
{
	public:
		Warrior(std::string name);
		void	hit_hard(Dude &target) const;
	private:

};

#endif