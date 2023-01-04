#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	public:
    	Zombie(std::string name);
		Zombie();
    	~Zombie();
		void	announce() const;
		void	setName(std::string name);

	private:
		std::string _name;
};

#endif