#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void    add();
    void    search();

private:
    Contact _contacts[8];
    int     _idx;

    void    _add_one(Contact &_contacts);
    int     _get_next_idx(void);
};

#endif