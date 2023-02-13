#include "Dog.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Dog::Dog()
{

}

Dog::Dog(Dog const &toCopy)
{
	(void)toCopy;
}

Dog::~Dog()
{

}


Dog	&Dog::operator=(Dog const &toAssign)
{
	if (this != &toAssign)
		(void)toAssign;
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