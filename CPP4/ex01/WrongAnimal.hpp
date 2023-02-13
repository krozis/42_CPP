#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define X "\e[0m"
# define ITALIC "\e[3m"
# define BLUE "\e[94m"
# define MAGENTA "\e[35m"


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