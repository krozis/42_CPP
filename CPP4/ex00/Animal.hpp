#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

# define X "\033[0m"
# define ITALIC "\033[3m"
# define GREY "\033[90m"
# define CYAN "\033[36m"
# define YELLOW "\033[33m"

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