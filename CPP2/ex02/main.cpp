#include <iostream>
#include "Fixed.hpp"
#include <stdlib.h>

#define ONE 25
#define TWO -10
#define THREE 42.42f
#define OTHER 3

#define DISPLAY_ONE(arg, val) display(arg, val); one = ONE
#define DISPLAY_TWO(arg, val) display(arg, val); two = TWO
#define DISPLAY_THREE(arg, val) display(arg, val); three = THREE
#define BACKLINE std::cout << X <<std::endl
#define X "\e[0m"
#define BOLD "\e[1m"
#define UNDERLINED "\e[4m"
#define BIG BOLD UNDERLINED
#define PINK "\e[38;5;162m"
#define ORANGE "\e[38;5;202m"
#define COLOR(nb) "\e[38;5;" << nb << "m"
#define MSG(msg, color) std::cout << color << msg << X << std::endl
#define NUMBER_ONE std::cout << ORANGE UNDERLINED << "_one_ (value " << ONE << ")\n" << X << ORANGE << std::endl
#define NUMBER_TWO std::cout << ORANGE UNDERLINED << "_two_ (value " << TWO << ")\n" << X << ORANGE << std::endl
#define NUMBER_THREE std::cout << ORANGE UNDERLINED << "_three_ (value " << THREE << ")\n" << X << ORANGE << std::endl
static void	display(std::string msg, Fixed nb)
{
	static int	val = 34;

	val += 4;
	if (val / 232)
		val = 160;
	std::cout << COLOR(val) << msg << " :\n-> int   " << nb.toInt() << "\n-> fixed " << nb << X << std::endl;
}

int main( void )
{
	MSG("\n---- SUBJECT TESTS ----\n", BIG);
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	MSG("\n---- OTHER TESTS ----\n", BIG);
	NUMBER_ONE;
	Fixed one(ONE);
	DISPLAY_ONE("simple", one);
	DISPLAY_ONE("++NB", ++one);
	DISPLAY_ONE("NB++", one++);
	DISPLAY_ONE("--NB", --one);
	DISPLAY_ONE("NB--", one--);
	DISPLAY_ONE("NB + X", one + OTHER);
	DISPLAY_ONE("NB - X", one - OTHER);
	DISPLAY_ONE("NB * X", one * OTHER);
	DISPLAY_ONE("NB / X", one * OTHER);
	BACKLINE;

	NUMBER_TWO;
	Fixed two(TWO);
	DISPLAY_TWO("simple", two);
	DISPLAY_TWO("++NB", ++two);
	DISPLAY_TWO("NB++", two++);
	DISPLAY_TWO("--NB", --two);
	DISPLAY_TWO("NB--", two--);
	DISPLAY_TWO("NB + X", two + OTHER);
	DISPLAY_TWO("NB - X", two - OTHER);
	DISPLAY_TWO("NB * X", two * OTHER);
	DISPLAY_TWO("NB / X", two / OTHER);
	BACKLINE;

	NUMBER_THREE;
	Fixed three(THREE);
	DISPLAY_THREE("simple", three);
	DISPLAY_THREE("++NB", ++three);
	DISPLAY_THREE("NB++", three++);
	DISPLAY_THREE("--NB", --three);
	DISPLAY_THREE("NB--", three--);
	DISPLAY_THREE("NB + X", three + OTHER);
	DISPLAY_THREE("NB - X", three - OTHER);
	DISPLAY_THREE("NB * X", three * OTHER);
	DISPLAY_THREE("NB / X", three / OTHER);
	BACKLINE;

	return 0;
}
