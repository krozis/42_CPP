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

void	Harl::debug()
{
	std::cout << DEBUG << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do !" << X << std::endl;
}

void	Harl::info()
{
	std::cout << INFO << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, "
	<< "I wouldn’t be asking for more !" << X << std::endl;
}

void	Harl::warning()
{
	std::cout << WARNING << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started "
	<< "working here since last month." << X << std::endl;
}

void	Harl::error()
{
	std::cout <<BOLD ERROR << "This is unacceptable ! I want to speak to the manager now." << X << std::endl;
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
	std::string	lvl[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "DEFAULT"};
	void	(Harl::*function[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::defaultComplain};

	for (int i = 0; i < 5; i++)
		if (level == lvl[i] || i == 4)
		{
			(this->*function[i])();
			break ;
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

