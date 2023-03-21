#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

#define BIG "\e[1m \e[4m"
#define BL std::cout << std::endl
#define ENDL "\e[0m" << std::endl
#define MSG_SIMPLE(msg) std::cout << msg << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL


int	main()
{
	MSG(BIG, "\n----- CONSTRUCTOR -----\n");
	{
		MSG_SIMPLE("\nSign and execute - Bureaucrat is OK");
		{
			Bureaucrat				toto("Boss", 1);
			ShrubberyCreationForm	scf("Standard form", "target");

			MSG_SIMPLE(scf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(scf);
				scf.execute(toto);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MSG_SIMPLE("\nSign and execute - Bureaucrat is NOK");
		{
			Bureaucrat				toto("Al Mostfired", 150);
			ShrubberyCreationForm	scf("Standard form", "target");

			MSG_SIMPLE(scf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(scf);
				scf.execute(toto);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MSG_SIMPLE("\nSign and execute - Bureaucrat can sign but can't execute");
		{
			Bureaucrat				toto("Assistant", 138);
			ShrubberyCreationForm	scf("Standard form", "target");

			MSG_SIMPLE(scf);
			MSG(toto, "\n");
			try
			{
				toto.signForm(scf);
				scf.execute(toto);
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
	return (EXIT_SUCCESS);
}
