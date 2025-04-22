# include <iostream>
# include <cctype>
# include "MateriaSource.hpp"
# include "Materias/A_Materia.hpp"
# define CONST_MSG "\033[1;32mDefault constructor MateriaSource called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor MateriaSource called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor MateriaSource called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor MateriaSource called\033[0m"

MateriaSource::MateriaSource( void )
	: nmateria_(0)
{
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = NULL;
	}
	materia_[0] = NULL;
	std::cout << CONST_MSG << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = NULL;
	}
	materia_[0] = NULL;
	std::cout << DEST_MSG << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;

}

MateriaSource & MateriaSource::operator= (MateriaSource const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	return *this;
}

void MateriaSource::learnMateria(A_Materia* m)
{
	if (nmateria_ < N_MATERIA)
	{
		for (size_t i = 0; this->materia_[i]; i++)
			this->materia_[i] = m;
		nmateria_++;
	}
}

A_Materia *MateriaSource::createMateria(std::string const & type)
{
	
}

