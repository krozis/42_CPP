#include "Bureaucrat.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;202m"
#define ENDL X << std::endl
#define BL std::cout << std::endl
#define NAME COLOR << "Bureaucrat 👨‍💼 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL

#define INVALID_VALUE "Bureaucrat::InvalidValue"
#define GRADE_TOO_HIGH "Bureaucrat::GradeTooHighException"
#define GRADE_TOO_LOW "Bureaucrat::GradeTooLowException"
#define EXCEP(excep) std::invalid_argument(excep)

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	BL;
	MSG("Constructor called");
	if (grade < 1)
		throw ( EXCEP(GRADE_TOO_HIGH));
	if (grade > 150)
		throw ( EXCEP(GRADE_TOO_LOW));
}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy): _name(toCopy._name)
{
	*this = toCopy;
}

Bureaucrat::~Bureaucrat() 
{
	MSG("Destructor called");
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &toAssign)
{
	if (this != &toAssign)
		_grade = toAssign._grade;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

void	Bureaucrat::minus()
{
	MSG("Upgrading grade by 1");
	if (_grade < 2)
		throw(EXCEP(GRADE_TOO_HIGH));
	_grade--;;
}

void	Bureaucrat::minus(int nb)
{
	MSG_TWO("Upgrading grade by ", nb);
	if (nb < 1)
		throw(EXCEP(INVALID_VALUE));
	if (_grade - nb < 1)
		throw(EXCEP(GRADE_TOO_HIGH));
	_grade -= nb;
}

void	Bureaucrat::plus()
{
	MSG("Downgrading grade by 1");
	if (_grade > 149)
		throw(EXCEP(GRADE_TOO_LOW));
	_grade++;
}

void	Bureaucrat::plus(int nb)
{
	MSG_TWO("Downgrading grade by ", nb);
	if (nb < 1)
		throw(EXCEP(INVALID_VALUE));
	if (_grade + nb > 150)
		throw(EXCEP(GRADE_TOO_LOW));
	_grade += nb;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

std::ostream &operator<<(std::ostream &flux, Bureaucrat const &bureaucrat)
{
	flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (flux);
}