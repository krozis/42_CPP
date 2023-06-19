#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

# define NOT_FOUND_EXCEPTION std::logic_error("easyfind::NotFoundException")

template<typename T>
int	easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw (NOT_FOUND_EXCEPTION);
	return (std::distance(container.begin(), it));
}

#endif