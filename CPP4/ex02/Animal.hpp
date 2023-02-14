#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "cpp_pool.hpp"
class Animal
{
	public:
		Animal();
		Animal(std::string const &type);
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