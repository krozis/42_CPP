#include <iostream>
#include <cstdlib>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address of string    = " << &string << std::endl;
	std::cout << "address of stringPTR = " << stringPTR << std::endl;
	std::cout << "address of stringREF = " << &stringREF << std::endl << std::endl;

	std::cout << "value of string    = " << string << std::endl;
	std::cout << "value of stringPTR = " << *stringPTR << std::endl;
	std::cout << "value of stringREF = " << stringREF << std::endl;
	return (EXIT_SUCCESS);
}