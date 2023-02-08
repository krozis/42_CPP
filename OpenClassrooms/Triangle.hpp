#ifndef TRIANGLE_H
# define TRIANGLE_H

# include "Figure.hpp"

class Triangle: public Figure
{
	public:
		Triangle();
		Triangle(unsigned int base, unsigned int height);
		Triangle(Triangle const &toCopy);
		virtual	~Triangle();
		Triangle	&operator=(Triangle const &toAssign);

		virtual void	display() const;
		virtual void	perimeter() const;
		virtual void	area() const;
		
		unsigned int	getBase() const;
		unsigned int	getHeight() const;
		void			setBase(unsigned int b);
		void			setHeight(unsigned int h);

	private:
		unsigned int	_base;
		unsigned int	_height;

		unsigned int	getPerimeter() const;
		double 			getArea() const;
};

//Triangle	&Triangle::operator+(Triangle const &toAssign, unsigned int i);

#endif