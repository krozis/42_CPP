#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>

template <typename Container>
bool isSorted(const Container& container)
{
	if (container.size() <= 1)
		return true; //if empty or only containing one element, its sorted.
	typename Container::const_iterator it = container.begin();
	typename Container::const_iterator next = it;
	++next;
	for (; next != container.end(); ++it, ++next)
		if (*next < *it)
			return false; //if next is inferior to it, its not sorted.
	return true; //if no problem found, its sorted.
}

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();

		int		verifyArray(int const &ac, char **av) const;
		void	sort(int const &ac, char **av);

	private:
		PmergeMe(PmergeMe const &toCopy);
		PmergeMe	&operator=(PmergeMe const &toAssign);

		bool	isAllowedArg(const char *allowed, char const *str) const;

		void	sortDeque(std::deque<int> &deq);
		void	mergeDeque(std::deque<int> &deq, std::deque<int> &left, std::deque<int> &right);
		void	insertDeque(std::deque<int> &deq);

		void	sortVector(std::vector<int> &vec);
		void	mergeVector(std::vector<int> &vec, std::vector<int> &left, std::vector<int> &right);
		void	insertVector(std::vector<int> &vec);
};

#endif
