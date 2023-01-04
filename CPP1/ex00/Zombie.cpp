#include "Zombie.hpp"

//PUBLIC
Zombie::Zombie(std::string name): _name(name)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
