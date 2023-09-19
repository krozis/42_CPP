#include "PmergeMe.hpp"
#include <cstdlib>

/*
 * USefull command to call program with 3000 random values between 1 and 100000:
 * ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
*/

int	main(int ac, char **av)
{
	PmergeMe	pmm;

	if (pmm.verifyArray(ac, av) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	pmm.sort(ac, av);
	return (EXIT_SUCCESS);
}
