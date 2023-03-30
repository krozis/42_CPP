#include <iostream>
#include <cstdlib>
#include "Span.hpp"

#define TITLE(msg) std::cout << "\e[1m\e[4m\e[38;5;202m\n" << msg << "\e[0m\n"
#define MSG(msg) std::cout << msg
#define MSG_TWO(msg, value) std::cout << msg << value << std::endl

int	main()
{

	try
	{
		TITLE("More than 10000 numbers\n");
		Span	s(12500);
	
		MSG_TWO("size at start: ", s.getSize());
		for (int i = -5000; i < 20000; i+= 2)
		{
			s.addNumber(i);
			std::cout << i << " | ";
		}
		MSG_TWO("size at end: ", s.getSize());
		MSG_TWO("ShortestSpan result: ", s.shortestSpan());
		MSG_TWO("LongestSpan result: ", s.longestSpan());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//
	try
	{
		TITLE("Successfull filling:\n");
		Span	s(15);
	
		MSG_TWO("size at start: ", s.getSize());
		for (int i = -5; i < 10; i+= 2)
		{
			s.addNumber(i);
			std::cout << i << " | ";
		}
		MSG("\n\n");
		MSG_TWO("size at end: ", s.getSize());
		MSG_TWO("ShortestSpan result: ", s.shortestSpan());
		MSG_TWO("LongestSpan result: ", s.longestSpan());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//
	try
	{
		TITLE("More than size:\n");
		Span	s(15);
	
		MSG_TWO("size at start: ", s.getSize());
		for (int i = -5; i < 100; i+= 2)
		{
			s.addNumber(i);
			std::cout << i << " | ";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//
	try
	{
		TITLE("ShortestSpan -> not enough numbers:\n");
		Span	s(15);
	
		MSG_TWO("size at start: ", s.getSize());
		for (int i = 0; i < 1; i+= 2)
		{
			s.addNumber(i);
			std::cout << i << " | ";
		}
		MSG_TWO("size at end: ", s.getSize());
		MSG_TWO("ShortestSpan result: ", s.shortestSpan());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//
	try
	{
		TITLE("LongestSpan -> not enough numbers:\n");
		Span	s(15);
	
		MSG_TWO("size at start: ", s.getSize());
		for (int i = 0; i < 1; i+= 2)
		{
			s.addNumber(i);
			std::cout << i << " | ";
		}
		MSG_TWO("size at end: ", s.getSize());
		MSG_TWO("LongestSpan result: ", s.longestSpan());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (EXIT_SUCCESS);
}

