# include <iostream>
# include <cctype>
# include "A_Materia.hpp"
# define CONST_MSG "\033[1;32mDefault constructor A_Materia called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor A_Materia called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor A_Materia called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor A_Materia called\033[0m"


A_Materia::A_Materia( void )
	: type("Empty")
{
	std::cout << CONST_MSG << std::endl;
}
A_Materia::A_Materia( std::string type)
	: type(type)
{
	std::cout << CONST_N_MSG << type << std::endl;
}

A_Materia::~A_Materia( void )
{
	std::cout << DEST_MSG << std::endl;
}

A_Materia::A_Materia( A_Materia const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;

}

A_Materia & A_Materia::operator= (A_Materia const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string const & A_Materia::getType() const
{
	return this->type;
}

void A_Materia::use(I_Character& target)
{
	(void)target;
	std::cout << "Wrong..." << std::endl;
	return ;
}