#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <cctype>
# include "A_Materia.hpp"
# include "I_MateriaSource.hpp"

class MateriaSource : public I_MateriaSource
{
	public:
	MateriaSource( void );
	virtual ~MateriaSource( void );
	MateriaSource( MateriaSource const &type);
	MateriaSource & operator =( MateriaSource const & rhs);


	virtual void learnMateria(A_Materia*);
	virtual A_Materia* createMateria(std::string const & type);

	private:
	A_Materia *materia_[N_MATERIA];
	int nmateria_;
};

# endif