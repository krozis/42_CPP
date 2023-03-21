#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(std::string name, std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &toCopy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &toAssign);

		static Form			*makeForm(Form *form, std::string const &type, std::string const &target);

	private:
		std::string	_target;

		void		beExecuted(Bureaucrat const &executor) const;
};

#endif
