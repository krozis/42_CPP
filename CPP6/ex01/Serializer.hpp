#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	int			i;
	char		c;
	std::string	s;
};

class Serializer
{
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(Serializer const &toCopy);
		~Serializer();
		Serializer	&operator=(Serializer const &toAssign);
};

#endif
