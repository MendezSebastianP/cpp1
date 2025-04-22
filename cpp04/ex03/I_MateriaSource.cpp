# include <iostream>
# include <cctype>
# include "I_MateriaSource.hpp"
# include "Materias/A_Materia.hpp"
# define CONST_MSG "\033[1;32mDefault constructor I_MateriaSource called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor I_MateriaSource called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor I_MateriaSource called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor I_MateriaSource called\033[0m"

I_MateriaSource::~I_MateriaSource( void )
{
	std::cout << DEST_MSG << std::endl;
}
