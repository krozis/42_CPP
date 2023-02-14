#include "Animal.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Animal::Animal(): _type("animal")
{
	std::cout << GREY << "Default constructor for an Animal instance called" << X << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << GREY << "Constructor for "<< _type << " typed Animal instance called" << X << std::endl;
}

Animal::Animal(Animal const &toCopy)
{
	std::cout << GREY << "copy constructor called for an Animal called" << X << std::endl;
	_type = toCopy._type;
}

Animal::~Animal()
{
	std::cout << GREY << "Animal's Destructor called" << X << std::endl;
}


Animal	&Animal::operator=(Animal const &toAssign)
{
	std::cout << GREY << "Assignement operator called for an Animal" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
	
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Animal::makeSound() const
{
	std::cout << ITALIC GREY << "you hear a random animal sound, far away..." << X << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/