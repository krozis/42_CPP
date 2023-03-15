#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &toCopy);
		~Brain();
		Brain	&operator=(Brain const &toAssign);

		void				setIdea(std::string const idea, int const idx);
		std::string const	&getIdea(int idx) const;
		std::string const	*getIdeaAddress(int idx) const;

	private:
		std::string	_ideas[100];
};

#endif
