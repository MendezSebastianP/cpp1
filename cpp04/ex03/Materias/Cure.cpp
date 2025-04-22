# include <iostream>
# include <cctype>
# include "A_Materia.hpp"
# include "Cure.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Cure called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Cure called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Cure called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Cure called\033[0m"


Cure::Cure( void )
	: type("Cure")
{
	std::cout << CONST_MSG << std::endl;
}

Cure::~Cure( void )
{
	std::cout << DEST_MSG << std::endl;
}

Cure::Cure( Cure const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;

}

Cure & Cure::operator= (Cure const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string const & Cure::getType() const
{
	return this->type;
}

Cure *Cure::clone() const
{

	return new Cure(*this);
}

void Cure::use(I_Character& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}
