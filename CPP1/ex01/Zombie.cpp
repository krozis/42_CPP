#include "Zombie.hpp"

#define C "\e[38;5;58m"
#define D "\e[90m"
#define MSG "\e[33m"
#define BOLD "\e[1m"
#define ITALIC "\e[3m"
#define X "\e[0m"

/********************************
 *			PUBLIC	 			*
 ********************************/
Zombie::Zombie(std::string name): _name(name)
{
	std::cout << C << "🧟 Creation of a zombie called " << BOLD << _name << X << std::endl; 
}

Zombie::Zombie()
{
	std::cout << C << "🧟 Creation of a zombie" << X << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << D << "💀 Destruction of the zombie called " << BOLD << _name << X << std::endl; 
}

void	Zombie::announce() const
{
	std::cout << MSG << _name << ITALIC << ": BraiiiiiiinnnzzzZ... 🧠" << X << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}
