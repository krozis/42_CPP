#include "PhoneBook.hpp"

/********************************
 *		NON-MEMBER FUNCTIONS	*
 ********************************/

/**
 * @brief Checks if a string contains only printable characters.
*/
static bool	isPrintable(std::string str)
{
	for (int i = 0; i < (int)str.size(); i++)
		if (str[i] < 32 || str[i] > 126)
			return (false);
	return (true);
}

/**
 * @brief	Tells if an input is invalid for usage.
 */
bool	is_invalid_input(std::string input)
{
	if (input.empty() || !isPrintable(input))
		return (true);
	for (std::string::iterator it = input.begin(); it != input.end(); it++)
		if ((char)(*it) != ' ')
			return (false);
	return (true);
}

/**
 * @brief Trunks a string to max size of 10 chars.
*/
static std::string	_cut_str(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

/********************************
 *			PRIVATE 			*
 ********************************/

/**
 * @brief Displays the selected contact
*/
void	PhoneBook::_display_one_full(Contact &_contact) const
{
	std::cout << "FirstName : " << _contact.getFirstName() << std::endl;
	std::cout << "LastName : " << _contact.getLastName() << std::endl;
	std::cout << "NickName : " << _contact.getNickName() << std::endl;
	std::cout << "Phone Number : " << _contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << _contact.getSecret() << std::endl;
	
}

/**
 * @brief Displays the short list of contacts, with the index.
*/
int	PhoneBook::_display_short(void) const
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
		std::cout << idx + 1 << "|" << std::setw(10) ;
		std::cout << _cut_str(_contacts[idx].getFirstName()) << "|"  << std::setw(10);
		std::cout << _cut_str(_contacts[idx].getLastName()) << "|"  << std::setw(10);
		std::cout << _cut_str(_contacts[idx].getNickName()) << "|"  << std::endl;
		idx++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	return (idx);
}

/**
 * @brief Asks the user to fill contact's informations.
 * @param  question: question to ask
 * @param  contact: the contact to modify
 * @param  type: 0 to 4 (Firsname to Secret)
 */
int	PhoneBook::_ask(std::string question, Contact &contact, int type)
{
	std::string	input;

	input.clear();
	std::cout << question;
	while (is_invalid_input(input))
	{
		if (std::cin.eof())
			return (EXIT_FAILURE);
		std::cout << "> ";
		getline(std::cin, input);
	}
	switch (type)
	{
		case 0:
		{
			contact.setFirstName(input);
			break;
		}
		case 1:
		{
			contact.setLastName(input);
			break;
		}
		case 2:
		{
			contact.setNickName(input);
			break;
		}
		case 3:
		{
			contact.setPhoneNumber(input);
			break;
		}
		case 4:
		{
			contact.setSecret(input);
			break;
		}
	}
	return (EXIT_SUCCESS);
}

/**
 * @brief Returns the index of the next contact to modify.
 */
int         PhoneBook::_get_next_idx() const
{
	static int	i = 0;

	if (_contacts[0].getFirstName().empty())
		return (0);
	i++;
	if (i == 8)
		i = i % 8;
	return (i);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

/**
 * @brief Adds a new contact to the phone book.
*/
void	PhoneBook::add(void)
{
	std::string question[5] = {"What is the first name? ", "What is the last name? ",\
		"What is the nickname? ", "What is the phone number? ", "What is his darkest secret? "};
	int			idx = _get_next_idx();

	std::cout << "Adding contact to index " << idx + 1 << std::endl;
	std::cin.ignore();
	for (int i=0; i < 5; i++)	
		if (_ask(question[i], _contacts[idx], i) == EXIT_FAILURE)
			break ;
}

/**
 * @brief Searches in contacts and shows informations about the
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
		std::cout << "Enter the index of the contact you want to show (1 to 8)";
		while (!(idx < 9 && idx > 0))
		{
			std::cout << "> ";
			if (std::cin.eof())
			return ;
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

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

PhoneBook::PhoneBook()
{
	std::cout << "Created PhoneBook." << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Deleted PhoneBook." << std::endl;
}
