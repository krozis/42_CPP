#include <iostream>
#include <string>
#include <cstdlib>
#include <csignal>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	user_entry = "";

	while (true)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter your command > ";
		std::cin >> user_entry;
		if (std::cin.eof())
			break ;
		if (user_entry == "EXIT")
			break ;
		else if (user_entry == "SEARCH")
			book.search();
		else if (user_entry == "ADD")
			book.add();
		else
			std::cout << "Options available: ADD, SEARCH or EXIT" << std::endl;
		user_entry = "";
	}
	return (EXIT_SUCCESS);
}
