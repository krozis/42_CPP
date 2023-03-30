#include "Span.hpp"
#include <iostream>
#include <algorithm>

#define TOO_MUCH_NB std::length_error("Span::MaxNumbersReachedException")
#define NOT_ENOUGH_NB std::length_error("Span::NotEnoughNumbersException")
/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Span::Span(unsigned int n): _n(n), _int_vector(0) {}

Span::Span(Span const &toCopy)
{
	*this = toCopy;
}

Span::~Span() {}

Span	&Span::operator=(Span const &toAssign)
{
	if (this != &toAssign)
	{
		_n = toAssign._n;
		_int_vector = toAssign._int_vector;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Span::addNumber(int nb)
{
	if (_int_vector.size() >= _n)
		throw (TOO_MUCH_NB);
	_int_vector.push_back(nb);
}

unsigned int	Span::shortestSpan() const
{
	if (_int_vector.size() < 2)
		throw (NOT_ENOUGH_NB);

	int					res;
	std::vector<int>	sorted = _int_vector;

	sort(sorted.begin(), sorted.end());
	res = sorted[1] - sorted[0];
	for (std::vector<int>::iterator it = sorted.begin() + 1; it < sorted.end() - 1; it++)
	{
		if (*(it +1) - *it < res)
			res = *(it +1) - *it;
	}
	return (res);
}

unsigned int	Span::longestSpan() const
{
	if (_int_vector.size() < 2)
		throw (NOT_ENOUGH_NB);

	std::vector<int>	sorted = _int_vector;

	sort(sorted.begin(), sorted.end());
	return (*(sorted.end() - 1) - *(sorted.begin()));
}

unsigned int	Span::getSize() const
{
	return (_int_vector.size());
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
