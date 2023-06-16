Problem at ex01: must have a surcharge :

template<typename T>
void	iter(T *tab, int const &size, void (*f)(T const &))
{
	if (!tab || !f || size <= 0)
		return ;
	for (int i = 0; i < size; i++)
		(*f)(tab[i]);
}
template<typename T>
void	iter(T *tab, int const &size, void (*f)(T &))
{
	if (!tab || !f || size <= 0)
		return ;
	for (int i = 0; i < size; i++)
		(*f)(tab[i]);
}
