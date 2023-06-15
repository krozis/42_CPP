#include "ScalarConverter.hpp"
#include <climits>
#include <iomanip>
#include <cmath>
#include <cstdlib>

#define UNUSED(x) (void)x

#define PRINTABLE(c) ((c >= ' ' && c <= '~')?(true):(false))
#define ASCII(c) ((c >= 0 && c <= 127)?(true):(false))
#define DIGIT(c) ((c >= '0' && c <= '9')?(true):(false))
#define CHAR(c) ((ASCII(c))?(c):(128))

#define MSGC(c) std::cout << "char: '" << c << "'" << std::endl
#define MSG(type, val) std::cout << type << ": " << val << std::endl
#define MSGF(f) std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl
#define MSGD(d) std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl

#define IMP "impossible"
#define DIS "non displayable"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &toCopy) { *this = toCopy; }

ScalarConverter::~ScalarConverter() {}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &toAssign) { UNUSED(toAssign); return *this; }

/********************************
 *			NOT IN CLASS		*
 ********************************/

static void _print_int(double d)
{
	if (d > INT_MAX || d < INT_MIN || std::isnan(d))
		MSG("int", IMP);
	else
		MSG("int", static_cast<int>(d));;
}

static void	_print_char(char c)
{
	if (PRINTABLE(c))
		MSGC(c);
	else if (ASCII(c))
		MSG("char", DIS);
	else
		MSG("char", IMP);
}

static void	_is_char(char c)
{
	_print_char(c);
	MSG("int", static_cast<int>(c));
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

/********************************
 *			PUBLIC	 			*
 ********************************/

void	ScalarConverter::convert(std::string const lit)
{
	
	double		d = std::strtod(lit.c_str(), NULL);

	if (lit.size() == 1 && ASCII(lit[0]) && !DIGIT(lit[0]))
		_is_char(lit[0]);
	else 
		_other(d);
}
