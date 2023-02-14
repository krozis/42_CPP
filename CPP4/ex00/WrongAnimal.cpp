#include "WrongAnimal.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongAnimal::WrongAnimal()
{

}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy)
{
	(void)toCopy;
}

WrongAnimal::~WrongAnimal()
{

}


WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &toAssign)
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