#include "Zombie.hpp"

void	randomChump(std::string const name)
{
	Zombie	zb(name);
	zb.announce();
}
