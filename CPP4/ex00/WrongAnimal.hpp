#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

# define X "\033[0m"
# define ITALIC "\033[3m"
# define BLUE "\033[94m"
# define MAGENTA "\033[35m"


class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &toCopy);
		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &toAssign);

		std::string const getType() const;
		void	makeSound() const;

	protected:
		std::string _type;

	private:

};

#endif