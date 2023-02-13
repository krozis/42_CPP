#include "Triangle.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Triangle::Triangle()
{
	_base = 0;
	_height = 0;
	std::cout << CYAN << "Triangle default Constructor" << X << std::endl;
}

Triangle::Triangle(unsigned int base, unsigned int height): _base(base), _height(height)
{
	std::cout << CYAN << "Triangle Constructor" << X << std::endl;
}

Triangle::Triangle(Triangle const &toCopy)
{
	_base = toCopy._base;
	_height = toCopy._height;
}

Triangle::~Triangle()
{
	std::cout << CYAN << "Triangle default Destructor" << X << std::endl;
}


Triangle	&Triangle::operator=(Triangle const &toAssign)
{
	if (this != &toAssign)
	{
		_base = toAssign._base;
		_height = toAssign._height;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Triangle::display() const
{
	std::cout << CYAN << "I am a Triangle of base " << _base << " and height " << _height << X << std::endl;
}

void	Triangle::perimeter() const
{
	std::cout << CYAN << "My perimeter is " << getPerimeter() << X << std::endl;
}

void	Triangle::area() const
{
	std::cout << CYAN << "My area is " << getArea() << X << std::endl;
}

unsigned int	Triangle::getBase() const
{
	return (_base);
}

unsigned int	Triangle::getHeight() const
{
	return (_height);
}

void	Triangle::setBase(unsigned int b)
{
	_base = b;
}

void	Triangle::setHeight(unsigned int h)
{
	_height = h;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

unsigned int	Triangle::getPerimeter() const
{
	double a, b;

	b = _base / 2;
	a = sqrt(pow(_height, 2) + pow(b, 2));
	std::cout << "side ->" << a << std::endl; 
	return (a + a + b);
}

double	Triangle::getArea() const
{
	return (0.5 * _base * _height);
}

/********************************
 *			OPERATORS 			*
 ********************************/

/* Triangle	&Triangle::operator+(Triangle const &toAssign, unsigned int i)
{
	this->setBase(this.)
} */