#include "Bureaucrat.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy)
{
	*this = toCopy;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &toAssign)
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
