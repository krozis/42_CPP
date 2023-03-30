#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &toCopy);
		~Span();
		Span	&operator=(Span const &toAssign);

		void			addNumber(int nb);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		unsigned int	getSize() const;

	private:
		unsigned int		_n;
		std::vector<int>	_int_vector;
};

#endif
