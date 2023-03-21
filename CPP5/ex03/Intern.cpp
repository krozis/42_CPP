#include "Intern.hpp"
#include "Form.hpp"

#define ERROR "Form::InvalidFormException"


/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Intern::Intern()
{
}

Intern::Intern(Intern const &toCopy)
{
	*this = toCopy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(Intern const &toAssign)
{
	if (this != &toAssign)
		(void)toAssign;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

Form	*Intern::makeForm(std::string const &type, std::string const &target) const
{
	Form	*form;

	form = Form::makeForm(type, target);
	if (!form)
		throw (std::invalid_argument(ERROR));
	else
		std::cout << "Intern created a new form " << form->getName() << " with " << target << " as a target." << std::endl;
	return (form);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
