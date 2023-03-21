#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

#define X "\e[0m"
#define COLOR "\e[90m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "RRF 🤖 : "
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL

#define TO_SIGN 72
#define TO_EXEC 45

#define NOISE MSG(ITALIC "bzzzt zztt bzzzzzttt!")
#define ROB_SUCCESS(target) std::cout << NAME << target << " has been robotomized. Hooray !!" << ENDL
#define ROB_FAIL(target) std::cout << NAME << target << " was not robotomized... So sad..." << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

RobotomyRequestForm::RobotomyRequestForm(): Form::Form("ShrubberyCreationForm", TO_SIGN, TO_EXEC), _target("no_target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target): Form::Form(name, TO_SIGN, TO_EXEC), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &toCopy): Form::Form(toCopy), _target(toCopy._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &toAssign)
{
	Form::operator=(toAssign);
	_target = toAssign._target;
	return (*this);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

void	RobotomyRequestForm::beExecuted(Bureaucrat const &executor) const
{
	int	success;

	MSG_TWO(executor.getName(), " executes a robotomization");
	srand((unsigned)time(NULL));
	success = rand() % 2;
	if (success)
		ROB_SUCCESS(_target);
	else
		ROB_FAIL(_target);
}

/********************************
 *			OPERATORS 			*
 ********************************/
