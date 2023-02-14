#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define X "\e[0m"
# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINED "\e[4m"
# define GREY "\e[90m"
# define CYAN "\e[36m"
# define YELLOW "\e[33m"
# define WHITE "\e[97m"
# define BLUE "\e[94m"
# define MAGENTA "\e[35m"
class Animal
{
	public:
		Animal();
		Animal(Animal const &toCopy);
		virtual ~Animal();
		Animal	&operator=(Animal const &toAssign);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	_type;

	private:

};

#endif