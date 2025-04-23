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
	std::cout << CONST_MSG << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	for (size_t i = 0; i < N_MATERIA && this->materia_[i]; i++)
	{
		delete this->materia_[i];
	}
	std::cout << DEST_MSG << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = src.materia_[i];
	}
	this->nmateria_ = src.nmateria_;
	std::cout << CPY_CONST_MSG << std::endl;
}

MateriaSource & MateriaSource::operator= (MateriaSource const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = rhs.materia_[i];
	}
	this->nmateria_ = rhs.nmateria_;
	return *this;
}

#include "Materias/Ice.hpp"
void MateriaSource::learnMateria(A_Materia* m)
{
	int i = 0;
	if (nmateria_ < N_MATERIA)
	{
		while (i < N_MATERIA && this->materia_[i]) {i++;}
		if (i > 3)
			return ;
		this->materia_[i] = m;
		nmateria_++;
	}
}

A_Materia *MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < N_MATERIA && this->materia_[i] && type != this->materia_[i]->getType())
	{
		i++;
	}
	if (i == 4)
		return 0;
	else
		return this->materia_[i];
}

