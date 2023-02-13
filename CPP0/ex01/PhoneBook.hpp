#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string_view>
# include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void    add();
    void    search();

private:
    Contact 	_contacts[8];

	int			_ask(std::string question, Contact &contact, int type);
	int			_get_next_idx() const;
	void		_display_one_full(Contact &_contact) const;
	int			_display_short() const;
};

bool	is_invalid_input(std::string input);

#endif
