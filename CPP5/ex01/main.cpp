#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

#define BIG "\e[1m \e[4m"
#define BL std::cout << std::endl
#define ENDL "\e[0m" << std::endl
#define MSG_SIMPLE(msg) std::cout << msg << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL


int	main()
{
	
	MSG(BIG, "\n----- CONSTRUCTOR -----\n");
	{
		MSG_SIMPLE("Good Form: \n");
		try
		{
			Form	toto("Welcome to HELL", 50, 75);
			MSG_SIMPLE(toto);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
//
		MSG_SIMPLE("\nForm with negative sign grade: \n");
		try
		{
			Form	toto("Negative attitude", -50, 75);
			MSG_SIMPLE(toto);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
//
		MSG_SIMPLE("\nForm with negative exec grade: \n");
		try
		{
			Form	toto("Negative attitude 2.0", 50, -75);
			MSG_SIMPLE(toto);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
//
		MSG_SIMPLE("\nForm with sign grade > 150: \n");
		try
		{
			Form	toto("You Deserves Better", 151, 75);
			MSG_SIMPLE(toto);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
//
		MSG_SIMPLE("\nForm with exec grade > 150: \n");
		try
		{
			Form	toto("You Deserves Better 2.0", 50, 175);
			MSG_SIMPLE(toto);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	MSG(BIG, "\n----- COPY -----\n");
	{
		Form	toto("COPYCAT", 42, 142);
		Form	tutu(toto);

		BL;
		MSG_SIMPLE(toto);
		MSG_SIMPLE(tutu);
		BL;
	}
	MSG(BIG, "\n----- ASSIGNEMENT -----\n");
	{
		Bureaucrat	ray("Raymond Poulidor", 35);
		Form		toto("ORIGINAL", 42, 142);
		Form		tutu("CLONE", 5,25);

		MSG_SIMPLE("\nBefore Assignement:");
		toto.beSigned(ray);
		MSG_SIMPLE(toto);
		MSG_SIMPLE(tutu);

		tutu = toto;

		MSG_SIMPLE("\nAfter Assignement:");
		MSG_SIMPLE(toto);
		MSG_SIMPLE(tutu);
		BL;
	}
	MSG(BIG, "\n----- SIGN THE FORM -----\n");
	{
		Form		toto("SIGN TEST", 50, 75);
		Bureaucrat	tata("Raymond Queneau", 55);
		Bureaucrat	titi("Raymond Barre", 30);

		BL;
		MSG_SIMPLE(toto);
		MSG_SIMPLE(tata);
		MSG_SIMPLE(titi);

		MSG_SIMPLE("\nNot enough graded to sign:");
		tata.signForm(toto);
//
		MSG_SIMPLE("\nGrade is OK:");
		titi.signForm(toto);
		BL;
	}
	return (EXIT_SUCCESS);
}
