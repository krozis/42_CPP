#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &toCopy);
		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &toAssign);


	private:

};

#endif