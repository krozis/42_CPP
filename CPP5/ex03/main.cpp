#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define X "\e[0m"
#define BIG "\e[1m \e[4m"
#define RED "\e[31m"
#define BL std::cout << std::endl
#define ENDL "\e[0m" << std::endl
#define MSG_SIMPLE(msg) std::cout << msg << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL

#define RRF "RobotomyRequestForm"
#define SCF "ShrubberyCreationForm"
#define PPF "PresidentialPardonForm"
#define TARGET_NAME "target"

int	main()
{
	Bureaucrat	boss("Boss", 1);
	Intern		intern;
	Form		*form;

	MSG(BIG, "---EXAMPLE FROM SUBJECT---\n");
	{
		try
		{
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			delete (rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Couldn't create form -> " << RED << e.what() << X << '\n';
		}
	}
	MSG(BIG, "\n------ CREATION ------\n");
	{
		try
		{
			form = intern.makeForm(SCF, "Bob");
			MSG_SIMPLE(*form);
			delete (form);
			form = intern.makeForm(RRF, "Bob");
			MSG_SIMPLE(*form);
			delete (form);
			form = intern.makeForm(PPF, "Bob");
			MSG_SIMPLE(*form);
			delete (form);
			form = intern.makeForm("Random Form", "Bob");
			MSG_SIMPLE(*form);
			delete (form);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception happened -> " << RED << e.what() << X << '\n';
		}
	}
	MSG(BIG, "\n------ USING THE FORM ------\n");
	{
		try
		{
			form = intern.makeForm(SCF, "Bob");
			boss.signForm(*form);
			boss.executeForm(*form);
			delete (form);
			form = intern.makeForm(RRF, "Bob");
			boss.signForm(*form);
			boss.executeForm(*form);
			delete (form);
			form = intern.makeForm(PPF, "Bob");
			boss.signForm(*form);
			boss.executeForm(*form);
			delete (form);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception happened -> " << RED << e.what() << X << '\n';
		}
	}
	return (EXIT_SUCCESS);
}
