#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define X "\e[0m"
# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINED "\e[4m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define MAGENTA "\e[35m"
# define CYAN "\e[36m"
# define GREY "\e[90m"
# define BLUE "\e[94m"
# define WHITE "\e[97m"
# define PINK "\e[38;5;162m"
# define ORANGE "\e[38;5;202m"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &toCopy);
		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &toAssign);

		void		makeSound() const;
		std::string	getType() const;

	protected:
		std::string	_type;

	private:

};

#endif