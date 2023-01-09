#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
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
    Contact _contacts[8];

    void        _add_one(Contact &_contact);
    int         _get_next_idx(void) const;
    void        _display_one_full(Contact &_contact) const;
    int        _display_short(void);
    std::string	_cut_str(std::string str) const;
};

#endif