#include "Contact.hpp"

std::string    Contact::getFirstName() const
{
	return (_firstname);
}

std::string    Contact::getLastName() const
{
	return (_lastname);
}
    
std::string    Contact::getNickName() const
{
	return (_nickname);
}

std::string    Contact::getPhoneNumber() const
{
	return (_phonenumber);
}

std::string	Contact::getSecret() const
{
	return (_darkestsecret);
}

void    Contact::setFirstName(std::string firstname)
{
	_firstname = firstname;
}

void    Contact::setLastName(std::string lastname)
{
	_lastname = lastname;
}

void    Contact::setNickName(std::string nickname)
{
	_nickname = nickname;
}

void    Contact::setPhoneNumber(std::string number)
{
	_phonenumber = number;
}

void    Contact::setSecret(std::string secret)
{
	_darkestsecret = secret;
}

bool	Contact::isSet(void) const
{
	if (_firstname.empty())
		return (false);
	return (true);
}

Contact::Contact()
{
}

Contact::~Contact()
{
	if (_firstname.empty() == false)
		std::cout << "Deleted contact " << _firstname << " " << _lastname <<"." << std::endl;
	else
		std::cout << "Deleted an empty contact." << std::endl;
}
