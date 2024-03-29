#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

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