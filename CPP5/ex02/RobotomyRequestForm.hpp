#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &toCopy);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &toAssign);

	private:
		std::string	_target;

		void		beExecuted(Bureaucrat const &executor) const;
};

#endif
