#ifndef I_MATERIASOURCE_HPP
# define I_MATERIASOURCE_HPP
# include <iostream>
# include <cctype>
# include "A_Materia.hpp"

class I_MateriaSource
{
	public:
	virtual ~I_MateriaSource() {}
	virtual void learnMateria(A_Materia*) = 0;
	virtual A_Materia* createMateria(std::string const & type) = 0;
};

#endif