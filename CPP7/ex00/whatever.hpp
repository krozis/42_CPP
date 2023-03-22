#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <cstdlib>
#include <iostream>

template<typename T> void	swap(T &a,T &b)
{
	T swp(a);

	a = b;
	b = swp;
}

template<typename T>
T const &max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return (b);
}

template<typename T>
T const &min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif