#include "Harl.hpp"

#define X "\e[0m"
#define BOLD "\e[1m"

#define DEBUG "\e[32m"
#define INFO "\e[33m"
#define WARNING "\e[38;5;202m"
#define ERROR "\e[38;5;196m"
#define DEFAULT "\e[3m \e[90m"

/********************************
 *			PRIVATE 			*
 ********************************/

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
	std::cout << BOLD DEBUG << "[ DEBUG ]" << std::endl; 
	std::cout << X DEBUG << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do !" << X << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << BOLD INFO << "[ INFO ]" << std::endl; 
	std::cout << X INFO << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger ! If you did, "
	<< "I wouldn’t be asking for more !" << X << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << BOLD WARNING << "[ WARNING ]" << std::endl; 
	std::cout << X WARNING << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started "
	<< "working here since last month." << X << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << BOLD ERROR << "[ ERROR ]" << std::endl; 
	std::cout << "This is unacceptable ! I want to speak to the manager now." << X << std::endl << std::endl;
}

void	Harl::defaultComplain()
{
	std::cout << DEFAULT << "[ Probably complaining about insignificant problems ]" << X << std::endl;
}


/********************************
 *			PUBLIC	 			*
 ********************************/

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

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Harl::Harl()
{
}

Harl::~Harl()
{
}

