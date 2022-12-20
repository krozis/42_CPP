#include "PhoneBook.hpp"

//PRIVATE

/*
 * @brief Returns the index of the next Contact in the book
 * that will be updated / created.
*/
int		PhoneBook::_get_next_idx(void)
{
	int	i = 0;

	while (i < 8 && _contacts[i].getFirstName() != "No entry")
	{
		i++;
		std::cout << "idx " << i << std::endl;
	}
	if (i == 8)
		i = 0;
	return (i);
}

void	PhoneBook::_add_one(Contact &_contact)
{
	std::string	input;

	std::cout << "What is the firstname? > ";
	std::cin >> input;
	_contact.setFirstName(input);
}

//PUBLIC
void	PhoneBook::add(void)
{
	int	i = _get_next_idx();

	std::cout << "Adding user to index " << i << std::endl;
	_add_one(_contacts[i]);
}

void	PhoneBook::search(void)
{
	std::cout << "searching user" << std::endl;
}

PhoneBook::PhoneBook()
{
	std::cout << "Created PhoneBook." << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Deleted PhoneBook." << std::endl;
}