#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

#define X "\e[0m"
#define COLOR "\e[33m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "PPF 👑 : "
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL

#define TO_SIGN 25
#define TO_EXEC 5

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

PresidentialPardonForm::PresidentialPardonForm(): Form::Form("PresidentialPardonForm", TO_SIGN, TO_EXEC), _target("no_target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target): Form::Form(name, TO_SIGN, TO_EXEC), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &toCopy): Form::Form(toCopy), _target(toCopy._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &toAssign)
{
	Form::operator=(toAssign);
	_target = toAssign._target;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

/********************************
 *			PRIVATE	 			*
 ********************************/

void		PresidentialPardonForm::beExecuted(Bureaucrat const &executor) const
{
	MSG_TWO(executor.getName(), " asked for a presidential pardon.");
	MSG_TWO(_target, " has been forgiven by Zaphod Beeblebrox.");
}

/********************************
 *			OPERATORS 			*
 ********************************/
