#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

#define X "\e[0m"
#define COLOR "\e[32m"
#define ENDL X << std::endl
#define NAME COLOR << "SCF 🌲 : "
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL

#define TO_SIGN 145
#define TO_EXEC 137

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

#define FILE_PROBLEM "\e[31mSCForm::FileCouldNotBeOpenedException\e[0m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ShrubberyCreationForm::ShrubberyCreationForm(): Form::Form("ShrubberyCreationForm", TO_SIGN, TO_EXEC), _target("no_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form::Form("ShrubberyCreationForm", TO_SIGN, TO_EXEC), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target): Form::Form(name, TO_SIGN, TO_EXEC), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &toCopy): Form::Form(toCopy), _target(toCopy._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &toAssign)
{
	Form::operator=(toAssign);
	_target = toAssign._target;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

Form			*ShrubberyCreationForm::makeForm(Form *form, std::string const &type, std::string const &target)
{
	if (form == NULL && type == "ShrubberyCreationForm")
		return (new ShrubberyCreationForm(target));
	return (form);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

void	ShrubberyCreationForm::beExecuted(Bureaucrat const &executor) const
{
	std::ofstream	file;

	file.open((_target + "_shrubbery").c_str(), std::fstream::app);
	if (file.fail())
		file.open((_target + "_shrubbery").c_str());
	if (file.fail())
		throw (std::runtime_error(FILE_PROBLEM));
	file << TREE;
	file.close();
	MSG_TWO(executor.getName(), " created a shrubbery");
}


/********************************
 *			OPERATORS 			*
 ********************************/
