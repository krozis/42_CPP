#include "Truck.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Truck::Truck()
{

}

Truck::Truck(Truck const &toCopy)
{
	(void)toCopy;
}

Truck::~Truck()
{

}


Truck	&Truck::operator=(Truck const &toAssign)
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