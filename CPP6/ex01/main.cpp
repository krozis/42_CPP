#include "Serializer.hpp"
#include <iostream>
#include <cstdlib>

#define MSG(one, two) std::cout << one << two << std::endl


static void	_print(Data *d)
{
	MSG("int  = ", d->i);
	MSG("char = ", d->c);
	MSG("str  = ", d->s);
}

static void	_set(Data *d, int i, char c, std::string s)
{
	d->i = i;
	d->c = c;
	d->s = s;
}

int	main()
{
	Data		*original = new Data;
	uintptr_t	serial = Serializer::serialize(original);
	Data		*copy = Serializer::deserialize(serial);

	MSG("\nOriginal address : ", original);
	MSG("uintptr_t value: ", serial);
	MSG("Deserialized address : ", copy);
	MSG("uintptr_t value form copy: ", Serializer::serialize(copy));

	MSG("\nSetting up original's value", "");
	_set(original, 42, 'x', "Born2Code");

	MSG("\nDisplaying original's value", "");
	_print(original);

	MSG("\nDisplaying copy's value", "");
	_print(copy);

	MSG("\nSetting up copy's value", "");
	_set(copy, 21, 'k', "REDRUM");

	MSG("\nDisplaying original's value", "");
	_print(original);

	delete (original);
	return (EXIT_SUCCESS);
}
