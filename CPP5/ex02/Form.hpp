#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int sign, int exec);
		Form(Form const &toCopy);
		virtual ~Form();
		Form	&operator=(Form const &toAssign);

		std::string const	getName() const;
		bool				getState() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				beSigned(Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const;

	protected:
		virtual void		beExecuted(Bureaucrat const &executor) const = 0;

	private:
		std::string const	_name;
		bool				_signed;
		int					_grade_to_sign;
		int					_grade_to_exectute;
};

std::ostream	&operator<<(std::ostream &flux, Form const &form);

#endif
