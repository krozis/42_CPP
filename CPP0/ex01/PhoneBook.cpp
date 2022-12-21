#include "PhoneBook.hpp"

//PRIVATE

/*
 * @brief Trunks a string to max size of 10 chars.
*/
std::string	PhoneBook::_cut_str(std::string str) const
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

/*
 * Displays the selected contact
*/
void	PhoneBook::_display_one_full(Contact &_contact) const
{
	std::cout << "FirstName : " << _contact.getFirstName() << std::endl;
	std::cout << "LastName : " << _contact.getLastName() << std::endl;
	std::cout << "NickName : " << _contact.getNickName() << std::endl;
	std::cout << "Phone Number : " << _contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << _contact.getSecret() << std::endl;
	
}

/*
 * @brief Displays the short list of contacts, with the index.
*/
int	PhoneBook::_display_short(void)
{
	int	idx = 0;
	if (_contacts[idx].isSet() == false)
		return (idx);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10);
	std::cout << "Index" << "|" << std::setw(10);
	std::cout << "First Name" << "|" << std::setw(10);
	std::cout << "Last Name" << "|" << std::setw(10);
	std::cout << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (idx < 8)
	{
		if (_contacts[idx].isSet() == false)
			break ;
		std::cout << "|" << std::setw(10);
		std::cout << idx + 1 << "|" << std::setw(10);
		std::cout << _cut_str(_contacts[idx].getFirstName()) << "|"  << std::setw(10);
		std::cout << std::setw(10);
		std::cout << _cut_str(_contacts[idx].getLastName()) << "|"  << std::setw(10);
		std::cout << std::setw(10);
		std::cout << _cut_str(_contacts[idx].getNickName()) << "|"  << std::endl;
		idx++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	return (idx);
}

/*
 * @brief Returns the index of the next Contact in the book
 * that will be updated / created.
*/
int		PhoneBook::_get_next_idx(void) const
{
	int	i = 0;

	while (i < 8 && _contacts[i].getFirstName() != "No entry")
		i++;
	if (i == 8)
		i = 0;
	return (i);
}

/*
 * @brief Adds/Modifies one contact.
*/
void	PhoneBook::_add_one(Contact &_contact)
{
	std::string	input;

	input = "";
	std::cout << "What is the first name? > ";
	while (input.size() == 0)
		getline(std::cin, input);
	_contact.setFirstName(input);
	input = "";
	std::cout << "What is the last name? > ";
	while (input.size() == 0)
		getline(std::cin, input);
	_contact.setLastName(input);
	input = "";
	std::cout << "What is the nickname? > ";
	while (input.size() == 0)
		getline(std::cin, input);
	_contact.setNickName(input);
	input = "";
	std::cout << "What is the phone number? > ";
	while (input.size() == 0)
		getline(std::cin, input);
	_contact.setPhoneNumber(input);
	input = "";
	std::cout << "What is the " << _contact.getFirstName() << "'s darkest secret? > ";
	while (input.size() == 0)
		getline(std::cin, input);
	_contact.setSecret(input);
}

//PUBLIC

/*
 * @brief Adds a new contact to the phone book.
*/
void	PhoneBook::add(void)
{
	int	i = _get_next_idx();
	std::cout << "Adding contact to index " << i + 1 << std::endl;
	_add_one(_contacts[i]);
}

/*
 * Searches in contacts and shows informations about the
 * selected one.
*/
void	PhoneBook::search(void)
{
	int			idx = 0;
	std::string	buf;

	idx = _display_short();
	if (idx == 0)
		std::cout << "No contact in the phone book." << std::endl;
	else
	{
		idx = 0;
		std::cout << "Enter the index of the contact you want to show (1 to 8)> ";
		while (!(idx < 9 && idx > 0))
		{
			std::cin >> buf;
			if (buf.size() > 1 || !isdigit(buf[0]))
				std::cout << "Invalid input." << std::endl;
			else
				idx = buf[0] - '0';
		}
		if (_contacts[idx - 1].isSet())
			_display_one_full(_contacts[idx - 1]);
		else
			std::cout << "This contact doesn't exists." << std::endl;
	}
}

PhoneBook::PhoneBook()
{
	std::cout << "Created PhoneBook." << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Deleted PhoneBook." << std::endl;
}