#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>
#include <climits>

template<typename T>
class Array
{
	public:
		Array<T>()
		{
			_n = 0;
			_data = NULL;
		}
		~Array<T>()
		{
			if (_n != 0)
				delete[] _data;	
		}
		Array<T>(unsigned int n)
		{
			_n = n;
			if (_n)
				_data = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_data[i] = 0;		
		}
		Array<T>(Array<T> const &toCopy)
		{
			*this = toCopy;
		}
		
		Array<T>		&operator=(Array<T> const &toAssign)
		{
			if (this != &toAssign)
			{
				_data = NULL;
				_n = toAssign._n;
				delete[] _data;
				_data = NULL;
				if (_n)
				{
					_data = new T[_n];
					for (unsigned int i = 0; i < _n; i++)
						_data[i] = toAssign._data[i];
				}
			}
			return (*this);
		}
		T				&operator[](unsigned int i)
		{
			if (i >= _n)
				throw(std::out_of_range("Array::OutOfRangeException"));
			return (_data[i]);
		}

		unsigned int	size() const
		{
			return (_n);
		}

	private:
		unsigned int	_n;   	//nb of elements in the array
		T				*_data;	//pointer on an element


};

#endif
