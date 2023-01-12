#include "Harl.hpp"

//PRIVATE

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do !" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger ! If you did, "
	<< "I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years whereas you started "
	<< "working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::defaultComplain()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

//PUBLIC

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

//CONSTRUCTOR / DESTRUCTOR

Harl::Harl()
{
}

Harl::~Harl()
{
}

