#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

#define BIG "\e[1m \e[4m"
#define ENDL "\e[0m" << std::endl
#define MSG_SIMPLE(msg) std::cout << msg << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL


int	main()
{
	MSG(BIG, "\n----- CONSTRUCTOR -----\n");
	{
		try
		{
			Bureaucrat	toto("Jim Halpert", 50);
			MSG_SIMPLE(toto);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Bureaucrat	toto("Michael Scott", 1);
			MSG_SIMPLE(toto);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Bureaucrat	toto("Pam Beesly", 160);
			MSG_SIMPLE(toto);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Bureaucrat	toto("Dwight Schrute", 0);
			MSG_SIMPLE(toto);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	MSG(BIG, "\n\n----- INCREMENTATION -----\n");
	{
		try
		{
			Bureaucrat	toto("Sylvester Staline", 136);

			MSG_SIMPLE(toto);
			toto.plus();
			MSG_SIMPLE(toto);
			toto.plus(13);
			MSG_SIMPLE(toto);
			toto.plus();
			MSG_SIMPLE(toto);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	MSG(BIG, "\n\n----- DECREMENTATION -----\n");
	{
		try
		{
			Bureaucrat	toto("John Lenine", 15);

			MSG_SIMPLE(toto);
			toto.minus();
			MSG_SIMPLE(toto);
			toto.minus(13);
			MSG_SIMPLE(toto);
			toto.minus();
			MSG_SIMPLE(toto);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Bureaucrat	toto("Carlos Marx", 50);

			MSG_SIMPLE(toto);
			toto.minus(-5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (EXIT_SUCCESS);
}
