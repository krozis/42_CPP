#include "Harl.hpp"

//PRIVATE

static int	getLevel(std::string level)
{
	std::string	lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == lvl[i])
			return (i);
	return (4);
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl; 
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do !" << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl; 
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger ! If you did, "
	<< "I wouldn’t be asking for more !" << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl; 
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started "
	<< "working here since last month." << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl; 
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::defaultComplain()
{
	std::cout << LIGHTBLUE << "[ Probably complaining about insignificant problems ]" << END << std::endl;
}


//PUBLIC

void	Harl::complain(std::string level)
{
	int		i = getLevel(level);
	void	(Harl::*function[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::defaultComplain};

	switch (i)
	{
		case 0:
		{
			(this->*function[i])();
			i++;
		}
		case 1:
		{
			(this->*function[i])();
			i++;
		}
		case 2:
		{
			(this->*function[i])();
			i++;
		}
		case 3:
		{
			(this->*function[i])();
			break ;
		}
		default:
		{
			(this->*function[4])();
			break;
		}
	}
			
}

//CONSTRUCTOR / DESTRUCTOR

Harl::Harl()
{
}

Harl::~Harl()
{
}

