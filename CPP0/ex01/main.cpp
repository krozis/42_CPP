#include <iostream>
#include <string>
#include <cstdlib>
#include <csignal>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	while (true)
	{
		input = "";
		std::cout << "Enter your command > ";
		std::cin >> input;
		if (std::cin.eof())
			break ;
		if (input == "EXIT" || input == "exit")
			break ;
		else if (input == "SEARCH" || input == "search")
			book.search();
		else if (input == "ADD" || input == "add")
			book.add();
		else
			std::cout << "Options available: ADD, SEARCH or EXIT" << std::endl;
	}
	return (EXIT_SUCCESS);
}
