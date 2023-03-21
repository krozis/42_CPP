#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &toCopy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &toAssign);

	private:
		std::string	_target;

		void		beExecuted(Bureaucrat const &executor) const;
};

#endif
