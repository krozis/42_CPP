#include "Form.hpp"
#include "Bureaucrat.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;45m"
#define ENDL X << std::endl
#define BL std::cout << std::endl
#define NAME COLOR << "Form 📄 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL
#define	MSG_SIGN(bname, fname) std::cout << NAME << bname << " signed the form " << fname << "." << ENDL

#define INVALID_VALUE "Form::InvalidValue"
#define GRADE_TOO_HIGH "Form::GradeTooHighException"
#define GRADE_TOO_LOW "Form::GradeTooLowException"
#define EXCEP(excep) std::invalid_argument(excep)

#define GRADE_IS_OK(x) ((x > 0 && x <= 150)?(true):(false))

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

/**
 * @brief Construct a new Form:: Form object
 * 
 * @param name name of the Form
 * @param sign minimum grade to sign the Form
 * @param exec minimum gradeto execute the Form
 */
Form::Form(std::string name, int sign, int exec): _name(name), _signed(false), _grade_to_sign(sign), _grade_to_exectute(exec)
{
	MSG_TWO("Constructor called for ", _name);
	if (!GRADE_IS_OK(sign) || !GRADE_IS_OK(exec))
		throw (EXCEP(INVALID_VALUE));
}

Form::Form(Form const &toCopy): _name(toCopy._name)
{
	MSG_TWO("Copy constructor called for ", toCopy._name);
	*this = toCopy;
}

Form::~Form()
{
	MSG_TWO("Destructor called for ", _name);
}

Form	&Form::operator=(Form const &toAssign)
{
	MSG_TWO("Assignement operator called for ", toAssign._name);
	if (this != &toAssign)
	{
		_signed = toAssign._signed;
		_grade_to_sign = toAssign._grade_to_sign;
		_grade_to_exectute = toAssign._grade_to_exectute;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getState() const
{
	return (_signed);
}

int	Form::getSignGrade() const
{
	return (_grade_to_sign);
}

int	Form::getExecGrade() const
{
	return (_grade_to_exectute);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() < 1)
		throw (EXCEP(GRADE_TOO_HIGH));
	if (bureaucrat.getGrade() > 150 || bureaucrat.getGrade() > _grade_to_sign)
		throw (EXCEP(GRADE_TOO_LOW));
	MSG_SIGN(bureaucrat.getName(), _name);
	_signed = true;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

std::ostream &operator<<(std::ostream &flux, Form const &form)
{
	flux << form.getName() << " can be signed by a bureaucrat grade " << form.getSignGrade()
	<< " and executed by a bureaucrat grade " << form.getExecGrade()
	<< ". It is actually " << (form.getState()?(""):("not ")) << "signed."; 
	return (flux);
}