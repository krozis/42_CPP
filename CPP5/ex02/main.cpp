#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#define BIG "\e[1m \e[4m"
#define RED "\e[31m"
#define BL std::cout << std::endl
#define ENDL "\e[0m" << std::endl
#define MSG_SIMPLE(msg) std::cout << msg << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL

#define FORM_NAME "42_Pool"
#define TARGET_NAME "target"

int	main()
{
	MSG(BIG RED, "______ShrubberyCreationForm______");
	{
		MSG_SIMPLE("\nSign and execute - Bureaucrat is OK");
		{
			Bureaucrat				toto("Boss", 1);
			ShrubberyCreationForm	scf(FORM_NAME, TARGET_NAME);

			MSG_SIMPLE(scf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(scf);
				toto.executeForm(scf);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MSG_SIMPLE("\nSign and execute - Bureaucrat is NOK");
		{
			Bureaucrat				toto("Al Mostfired", 150);
			ShrubberyCreationForm	scf(FORM_NAME, TARGET_NAME);

			MSG_SIMPLE(scf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(scf);
				toto.executeForm(scf);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MSG_SIMPLE("\nSign and execute - Bureaucrat can sign but can't execute");
		{
			Bureaucrat				toto("Assistant", 138);
			ShrubberyCreationForm	scf(FORM_NAME, TARGET_NAME);

			MSG_SIMPLE(scf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(scf);
				toto.executeForm(scf);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
//
	MSG(BIG RED, "\n______RobotomyRequestForm______");
	{
		MSG_SIMPLE("\nSign and execute - Bureaucrat is OK");
		{
			Bureaucrat				toto("Boss", 1);
			RobotomyRequestForm	rrf(FORM_NAME, TARGET_NAME);

			MSG_SIMPLE(rrf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(rrf);
				toto.executeForm(rrf);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MSG_SIMPLE("\nSign and execute - Bureaucrat is NOK");
		{
			Bureaucrat				toto("Al Mostfired", 150);
			RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);

			MSG_SIMPLE(rrf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(rrf);
				toto.executeForm(rrf);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MSG_SIMPLE("\nSign and execute - Bureaucrat can sign but can't execute");
		{
			Bureaucrat				toto("Assistant", 50);
			RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);

			MSG_SIMPLE(rrf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(rrf);
				toto.executeForm(rrf);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
	return (EXIT_SUCCESS);
}
