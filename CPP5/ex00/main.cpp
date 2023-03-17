#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

#define BIG "\e[1m \e[4m"
#define RED "\e[31m"
//#define UNDERLINED "\e[4m"
#define ENDL "\e[0m" << std::endl
//#define BL std::cout << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL
#define MSG_TWO(type, first, second) std::cout << type << first << second << ENDL

int	main()
{
	Bureaucrat toto;

	return (EXIT_SUCCESS);
}