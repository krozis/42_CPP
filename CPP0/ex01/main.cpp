#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	bool		exit_status = false;
	std::string	user_entry;
	while (!exit_status)
	{
		std::cout << "Enter your command > ";
		std::cin >> user_entry;
		if (user_entry == "EXIT")
			exit_status = true;
		else if (user_entry == "SEARCH")
			book.search();
		else if (user_entry == "ADD")
			book.add();
		else
			std::cout << "Options available: ADD, SEARCH or EXIT" << std::endl;
	}
	return (EXIT_SUCCESS);
}
