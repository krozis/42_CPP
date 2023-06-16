#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		// DEFAULT CONSTRUCTOR
		Array<T>(): _n(0), _data(NULL) {}

		//CONSTRUCTOR WITH A SIZE
		Array<T>(unsigned int n): _n(n), _data(new T[_n])
		{
			if (n < 0)
				throw (std::invalid_argument("Array:InvalidArgument"));
			for (unsigned int i = 0; i < _n; i++)
				_data[i] = T();							//Default value for all types (which have a default constructor)	
		}

		//DESTRUCTOR
		~Array<T>() { delete[] _data; }

		//COPY CONSTRUCTOR
		Array<T>(Array<T> const &toCopy)
		{
			_n = toCopy._n;
			_data = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_data[i] = toCopy._data[i];	
		}

		//ASSIGNEMENT OPERATOR
		Array<T>		&operator=(Array<T> const &toAssign)
		{
			if (this != 	&toAssign)
			{
				//_data = NULL;
				delete[] _data;
				_n = toAssign._n;
				_data = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					_data[i] = toAssign._data[i];
				}
			return (*this);
		}

		// INDEX [] OPERATOR
		T	&operator[](unsigned int i)
		{
			if (i >= _n)
				throw(std::out_of_range("Array::OutOfRangeException"));
			return (_data[i]);
		}

		//SIZE MEMBER FUNCTION
		unsigned int	size() const { return (_n); }

	private:
		unsigned int	_n;   	//nb of elements in the array
		T				*_data;	//pointer on an element


};

#endif
