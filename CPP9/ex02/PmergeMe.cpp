#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>

#define OUTPUT(output) std::cout << output << std::endl
#define OUTPUT_NO_BL(output) std::cout << output
#define OUTPUT_TIME(nb, type, time) std::cout << "Time to process a range of " << nb << " elements with " << type << " : " << time << " us" << std::endl

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

PmergeMe::PmergeMe() { }

PmergeMe::~PmergeMe() { }

PmergeMe::PmergeMe(PmergeMe const &toCopy) { *this = toCopy; }

PmergeMe	&PmergeMe::operator=(PmergeMe const &toAssign)
{
	if (this != &toAssign)
		*this = toAssign;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

int	PmergeMe::verifyArray(int const &ac, char **av) const
{
	if (ac == 1)
	{
		OUTPUT("Error: no arguments given");
		return (EXIT_FAILURE);
	}
	for (int i = 1; i < ac; i++)
	{
		if (isAllowedArg("-0123456789", av[i]) == false)
		{
			OUTPUT("Error: arguments must only be numbers");
			return (EXIT_FAILURE);
		}
		if (isAllowedArg("0123456789", av[i]) == false)
		{
			OUTPUT("Error: only positive int allowed");
			return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}

void	PmergeMe::sort(int const &ac, char **av)
{
	std::deque<int>		deq;
	std::vector<int>	vec;

	OUTPUT_NO_BL("Before: ");
	for (int i = 1; i < ac; i++)
	{
		OUTPUT_NO_BL(av[i]);
		if (i < ac - 1)
			OUTPUT_NO_BL(" ");
		else
			OUTPUT("");
		deq.push_back(atoi(av[i]));
		vec.push_back(atoi(av[i]));
	}
	OUTPUT_NO_BL("After:  ");

	//deque sorting
	std::clock_t	deqStartTime = std::clock();
	sortDeque(deq);
	std::clock_t	deqStopTime = std::clock();
	//Display result for deque
	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
	{
		OUTPUT_NO_BL(*it);
		OUTPUT_NO_BL(" ");
	}
	OUTPUT("");
	//Check if correctly sorted
	if (isSorted(deq) == false)
		OUTPUT("DEQUE IS NOT SORTED!");
	//Display time for deque
	OUTPUT_TIME(deq.size(), "std::deque ", static_cast<double>(deqStopTime - deqStartTime) / CLOCKS_PER_SEC * 1000000);


	//vector sorting
	std::clock_t	vecStartTime = std::clock();
	sortVector(vec);
	std::clock_t	vecStopTime = std::clock();
	//Display result for vector
/*
	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
	{
		OUTPUT_NO_BL(*it);
		OUTPUT_NO_BL(" ");
	}
	OUTPUT("");
*/
	//Check if correctly sorted
	if (isSorted(vec) == false)
		OUTPUT("VECTOR IS NOT SORTED!");
	//Display time for vector
	OUTPUT_TIME(vec.size(), "std::vector", static_cast<double>(vecStopTime - vecStartTime) / CLOCKS_PER_SEC * 1000000);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

bool	PmergeMe::isAllowedArg(const char *allowed, const char *str) const
{
	if (str == NULL)
		return (false);
	while (*str)
	{
		if (strchr(allowed, *str) == NULL)
			return (false);
		str++;
	}
	return (true);
}

void	PmergeMe::sortDeque(std::deque<int> &deq)
{
	int	n = deq.size();
	if (n <= 1)				//deque is empty or sorted
		return ;
	int threshold = 16;		//min size to go insert sorting
	if (n <= threshold)
		insertDeque(deq);
	else
	{
		int				mid = n / 2;
		std::deque<int>	left(deq.begin(), deq.begin() + mid);
		std::deque<int> right(deq.begin() + mid, deq.end());

		sortDeque(left);
		sortDeque(right);
		mergeDeque(deq, left, right);
	}
}

void	PmergeMe::mergeDeque(std::deque<int> &deq, std::deque<int> &left, std::deque<int> &right)
{
	int	sizeLeft = left.size();
	int	sizeRight = right.size();
	int i = 0, j = 0, k = 0;

	while (j < sizeLeft && k < sizeRight)
	{
		if (left[j] < right[k])
			deq[i++] = left[j++];
		else
			deq[i++] = right[k++];
	}

	while (j < sizeLeft)
		deq[i++] = left[j++];

	while (k < sizeRight)
		deq[i++] = right[k++];
}

void	PmergeMe::insertDeque(std::deque<int> &deq)
{
	int	size = deq.size();
	for (int i = 1; i < size; i++)
	{
		int	x = deq[i];
		int j = i - 1;
		while (j >= 0 && deq[j] > x)
		{
			deq[j + 1] = deq[j];
			j--;
		}
		deq[j + 1] = x;
	}
}

void	PmergeMe::sortVector(std::vector<int> &vec)
{
	int	n = vec.size();
	if (n <= 1)				//vector is empty or sorted
		return ;
	int threshold = 16;		//min size to go insert sorting
	if (n <= threshold)
		insertVector(vec);
	else
	{
		int					mid = n / 2;
		std::vector<int>	left(vec.begin(), vec.begin() + mid);
		std::vector<int>	right(vec.begin() + mid, vec.end());
		
		sortVector(left);
		sortVector(right);
		mergeVector(vec, left, right);
	}
}

void	PmergeMe::mergeVector(std::vector<int> &vec, std::vector<int> &left, std::vector<int> &right)
{
	int	sizeLeft = left.size();
	int	sizeRight = right.size();
	int i = 0, j = 0, k = 0;

	while (j < sizeLeft && k < sizeRight)
	{
		if (left[j] < right[k])
			vec[i++] = left[j++];
		else
			vec[i++] = right[k++];
	}

	while (j < sizeLeft)
		vec[i++] = left[j++];

	while (k < sizeRight)
		vec[i++] = right[k++];	
}

void	PmergeMe::insertVector(std::vector<int> &vec)
{
	int	size = vec.size();
	for (int i = 1; i < size; i++)
	{
		int	x = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > x)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = x;
	}
}

