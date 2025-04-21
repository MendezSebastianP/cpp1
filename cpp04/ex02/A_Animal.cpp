# include <iostream>
# include <cctype>
# include "A_Animal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor A_Animal called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor A_Animal called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor A_Animal called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor A_Animal called\033[0m"

A_Animal::A_Animal( void )
	: type("Empty")
{
	std::cout << CONST_MSG << std::endl;
}

A_Animal::~A_Animal( void )
{
	std::cout << DEST_MSG << std::endl;
}

A_Animal::A_Animal( A_Animal const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;

}

A_Animal & A_Animal::operator= (A_Animal const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string	A_Animal::getType( void ) const
{
	return this->type;
}

void A_Animal::makeSound( void ) const
{
	std::cout << "... (A_Animal: mother nature tries to speak your lenguage but she can't)" << std::endl;
}


