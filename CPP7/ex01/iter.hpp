#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

template<typename T>
void	iter(T const *tab, int const &size, void (*f)(T const &))
{
	if (!tab || !f || size <= 0)
		return ;
	for (int i = 0; i < size; i++)
		(*f)(tab[i]);
}

#endif