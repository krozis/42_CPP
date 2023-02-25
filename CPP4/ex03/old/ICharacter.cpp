#include "ICharacter.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ICharacter::ICharacter(): _name("unnamed")
{
	std::cout << BROWN << "Default constructor for ICharacter called" << X << std::endl;
}

ICharacter::ICharacter(std::string const &name): _name(name)
{
	std::cout << BROWN << "Constructor for the ICharacter named " << _name << X << std::endl;
}

ICharacter::ICharacter(ICharacter const &toCopy)
{
	std::cout << BROWN << "copy constructor for ICharacter called" << X << std::endl;
	*this = toCopy;
}

ICharacter::~ICharacter()
{
	std::cout << BROWN << "Destructor for ICharacter called" << X << std::endl;
}

ICharacter	&ICharacter::operator=(ICharacter const &toAssign)
{
	std::cout << BROWN << "Assignement operator for ICharacter called" << X << std::endl;
	if (this != &toAssign)
		*this = toAssign;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/



/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
