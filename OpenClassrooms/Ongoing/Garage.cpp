#include "Garage.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Garage::Garage()
{

}

Garage::Garage(Garage const &toCopy)
{
	(void)toCopy;
}

Garage::~Garage()
{

}


Garage	&Garage::operator=(Garage const &toAssign)
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