#include "Duree.hpp"

//------------CONSTRUCTORS------------

Duree::Duree(int hour, int min, int sec)
{
	_sec = sec % 60;
	_min = ((sec / 60) + (min % 60)) % 60;
	_hour = hour + (sec / 3600) + (hour / 60);
}

Duree::Duree(int sec)
{
	_sec = sec % 60;
	_min = (sec / 60) % 60;
	_hour = sec / 3600;
}

Duree::Duree(): _hour(0), _min(0), _sec(0)
{
}

Duree::~Duree()
{
}

//------------METHODS------------

void	Duree::display(std::ostream &flux) const
{
	flux << _hour << "h " << _min << "min " << _sec << "sec";
}

bool	Duree::isEqual(Duree const &b) const
{
	return (_hour == b._hour && _min == b._min && _sec == b._sec);
}

bool	Duree::isGreater(Duree const &b) const
{
	if (_hour > b._hour)
		return (true);
	else if (_hour < b._hour)
		return (false);
	if (_min > b._min)
		return (true);
	else if (_min < b._min)
		return (false);
	if (_sec > b._sec)
		return (true);
	return (false);
}

bool	Duree::isSmaller(Duree const &b) const
{
	if (_hour < b._hour)
		return (true);
	else if (_hour > b._hour)
		return (false);
	if (_min < b._min)
		return (true);
	else if (_min > b._min)
		return (false);
	if (_sec < b._sec)
		return (true);
	return (false);
}

//------------OPERATORS------------

Duree	&Duree::operator+=(const Duree &a)
{
	_sec += a._sec;
	_min += a._min + (_sec / 60);
	_sec %= 60;
	_hour += a._hour + (_min /60);
	_min %= 60;
	return (*this);
}

Duree	operator+(Duree const &a, Duree const &b)
{
	Duree result(a);
	result += b;
	return result;
}

bool	operator==(Duree const &a, Duree const &b)
{
	return (a.isEqual(b));
}

bool	operator>(Duree const &a, Duree const& b)
{
	return (a.isGreater(b));
}

bool	operator<(Duree const &a, Duree const& b)
{
	return (a.isSmaller(b));
}

std::ostream &operator<<(std::ostream &flux, Duree const& duree)
{
	duree.display(flux);
	return (flux);
}
