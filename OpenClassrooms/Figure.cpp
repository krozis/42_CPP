#include "Figure.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Figure::Figure()
{
	std::cout << GREY << "Figure default Constructor" << X << std::endl;
}

Figure::Figure(Figure const &toCopy)
{
	(void)toCopy;
	std::cout << GREY << "Figure default Constructor" << X << std::endl;
}

Figure::~Figure()
{
	std::cout << GREY << "Figure default Destructor" << X << std::endl;
}


Figure	&Figure::operator=(Figure const &toAssign)
{
	if (this != &toAssign)
		*this = toAssign;
	return (*this);
}

