#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

# define X "\e[0m"
# define ITALIC "\e[3m"
# define GREY "\e[90m"
# define CYAN "\e[36m"
# define YELLOW "\e[33m"

class Animal
{
	public:
		Animal();
		Animal(Animal const &toCopy);
		virtual ~Animal();
		Animal	&operator=(Animal const &toAssign);

		virtual std::string	const	getType() const;
		virtual void				makeSound() const;

	protected:
		std::string	_type;

	private:

};

#endif