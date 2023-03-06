#include <iostream>
#include <cstdlib>

#define X "\e[0m"
#define ADDRESS "\e[38;5;202m"
#define VALUE "\e[35m"

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::endl;
	std::cout << ADDRESS << "address of string    = " << &string << X << std::endl;
	std::cout << ADDRESS << "address of stringPTR = " << stringPTR << X << std::endl;
	std::cout << ADDRESS << "address of stringREF = " << &stringREF << X << std::endl << std::endl;

	std::cout << VALUE << "value of string    = " << string << X << std::endl;
	std::cout << VALUE << "value of stringPTR = " << *stringPTR << X << std::endl;
	std::cout << VALUE << "value of stringREF = " << stringREF << X << std::endl;
	return (EXIT_SUCCESS);
}