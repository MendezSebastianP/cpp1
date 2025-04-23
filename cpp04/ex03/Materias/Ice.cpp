# include <iostream>
# include <cctype>
# include "A_Materia.hpp"
# include "Ice.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Ice called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Ice called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Ice called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Ice called\033[0m"


Ice::Ice( void )
	: A_Materia("ice")
{
	std::cout << CONST_MSG << std::endl;
}

Ice::~Ice( void )
{
	std::cout << DEST_MSG << std::endl;
}

Ice::Ice( Ice const &src )
	: A_Materia(src)
{
	std::cout << CPY_CONST_MSG << std::endl;
}

Ice & Ice::operator= (Ice const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string const & Ice::getType() const
{
	return this->type;
}

Ice *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(I_Character& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
