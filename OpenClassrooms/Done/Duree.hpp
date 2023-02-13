#ifndef DUREE_HPP
# define DUREE_HPP
# include <iostream>

class Duree
{
	public:
		Duree(int hour, int min, int sec);
		Duree(int sec);
		Duree();
		~Duree();
		void	display(std::ostream &flux) const;
		Duree	&operator+=(Duree const &a);
		bool	isEqual(Duree const &b) const;
		bool	isGreater(Duree const &b) const;
		bool	isSmaller(Duree const &b) const;

	private:
		int	_hour;
		int	_min;
		int	_sec;
};

Duree	operator+(Duree const &a, Duree const &b);
bool	operator==(Duree const &a, Duree const &b);
bool	operator>(Duree const &a, Duree const& b);
bool	operator<(Duree const &a, Duree const& b);

std::ostream &operator<<(std::ostream &flux, Duree const& duree);

#endif