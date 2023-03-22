#include <iostream>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include <cmath>

#define USAGE std::cerr << "\e[31mUsage: ./convert <value>\e[0m" << std::endl; return (EXIT_FAILURE);

#define MSGC(c) std::cout << "char : " << c << std::endl
#define MSGI(i) std::cout << "int : " << i << std::endl
#define MSGF(f) std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl
#define MSGD(d) std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl

#define PRINTABLE(c) ((c >= ' ' && c <= '~')?(true):(false))
#define ASCII(c) ((c >= 0 && c <= 127)?(true):(false))
#define DIGIT(c) ((c >= '0' && c <= '9')?(true):(false))
#define CHAR(c) ((ASCII(c))?(c):(128))

#define IMP "impossible"
#define DIS "non displayable"

static void _print_int(double d)
{
	if (d > INT_MAX || d < INT_MIN || std::isnan(d))
		MSGI(IMP);
	else
		MSGI(static_cast<int>(d));;
}

static void	_print_char(char c)
{
	if (PRINTABLE(c))
		MSGC(c);
	else if (ASCII(c))
		MSGC(DIS);
	else
		MSGC(IMP);
}

static void	_is_char(char c)
{
	_print_char(c);
	MSGI(static_cast<int>(c));
	MSGF(static_cast<float>(c));
	MSGD(static_cast<double>(c));
}

static void	_other(double d)
{
	_print_char(static_cast<char>(CHAR(d)));
	_print_int(d);
	MSGF(static_cast<float>(d));
	MSGD(d);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		{USAGE;}

	std::string	str(av[1]);
	double		d = std::strtod(av[1], NULL);

	if (str.size() == 1 && ASCII(str[0]) && !DIGIT(str[0]))
		_is_char(str[0]);
	else 
		_other(d);
	return (EXIT_SUCCESS);
}
