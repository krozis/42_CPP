#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &toCopy);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &toAssign);

		static Form			*makeForm(Form *form, std::string const &type, std::string const &target);

	private:
		std::string	_target;

		void		beExecuted(Bureaucrat const &executor) const;
};

#endif
