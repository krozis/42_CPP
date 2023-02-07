#ifndef DUDE_H
# define DUDE_H

#include <iostream>	

class Dude
{
	public:
		Dude(std::string name);
		~Dude();
		void	takeDmg(unsigned int dmg);
		void	hit(Dude &target) const;
	private:
		unsigned int	_hp;
		std::string		_name;






/* 	public:
		Dude(std::string name);
		~Dude();


	private:
		unsigned int	_hp;
		std::string		_name;
		unsigned int	_dmg; */
};

#endif