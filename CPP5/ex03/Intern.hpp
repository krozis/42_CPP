#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern const &toCopy);
		~Intern();
		Intern	&operator=(Intern const &toAssign);

		Form	*makeForm(std::string const &type, std::string const &target) const;

	private:

};

#endif
