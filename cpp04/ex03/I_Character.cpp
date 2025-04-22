# include <iostream>
# include <cctype>
# include "I_Character.hpp"
# define CONST_MSG "\033[1;32mDefault constructor I_Character called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor I_Character called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor I_Character called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor I_Character called\033[0m"


I_Character::I_Character( void )
{
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = NULL;
	}
	
	materia_[0] = NULL;
	std::cout << CONST_MSG << std::endl;
}

I_Character::~I_Character( void )
{
	std::cout << DEST_MSG << std::endl;
}

I_Character::I_Character( I_Character const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = src.materia_[i];
	}

}

I_Character & I_Character::operator= (I_Character const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = rhs.materia_[i];
	}
	return *this;
}

