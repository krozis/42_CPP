#include "Serializer.hpp"

#define UNUSED(x) (void)x

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Serializer::Serializer() {}
Serializer::Serializer(Serializer const &toCopy) { *this = toCopy; }
Serializer::~Serializer() {}
Serializer	&Serializer::operator=(Serializer const &toAssign) { UNUSED(toAssign); return *this; }

/********************************
 *			PUBLIC	 			*
 ********************************/

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


