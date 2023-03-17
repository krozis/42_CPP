#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &toCopy);
		~Bureaucrat();
		Bureaucrat	&operator=(Bureaucrat const &toAssign);

		int			getGrade() const;
		std::string	getName() const;

		void		plus();
		void		plus(int nb);
		void		minus();
		void		minus(int nb);

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &flux, Bureaucrat const &bureaucrat);

#endif
