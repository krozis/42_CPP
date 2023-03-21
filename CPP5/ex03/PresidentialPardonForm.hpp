#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &toCopy);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &toAssign);

		static Form			*makeForm(Form *form, std::string const &type, std::string const &target);

	private:
		std::string	_target;

		void		beExecuted(Bureaucrat const &executor) const;
};

#endif
