#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};

class MateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &toCopy);
		~MateriaSource();
		MateriaSource	&operator=(MateriaSource const &toAssign);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_models[4];
};

#endif
