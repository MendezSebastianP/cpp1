# include <iostream>
# include <cctype>
# include "Animal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Animal called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Animal called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Animal called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Animal called\033[0m"

Animal::Animal( void )
	: type("Empty")
{
	std::cout << CONST_MSG << std::endl;
}

Animal::~Animal( void )
{
	std::cout << DEST_MSG << std::endl;
}

Animal::Animal( Animal const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;

}

Animal & Animal::operator= (Animal const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}

void Animal::makeSound( void ) const
{
	std::cout << "... (Animal: mother nature tries to speak your lenguage but she can't)" << std::endl;
}


