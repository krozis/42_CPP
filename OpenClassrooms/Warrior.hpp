#ifndef WARRIOR_H
# define WARRIOR_H

# include "Dude.hpp"

class Warrior: public Dude
{
	public:
		Warrior(std::string name);
		void	hit_hard(Dude &target) const;
	private:

};

#endif