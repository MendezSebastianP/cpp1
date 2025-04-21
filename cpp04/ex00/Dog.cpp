# include <iostream>
# include <cctype>
# include "Dog.hpp"
# include "Animal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Dog called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Dog called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Dog called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Dog called\033[0m"

Dog::Dog( void )
	: Animal()
{
	this->type = "Dog";
	std::cout << CONST_MSG << std::endl;
}

Dog::~Dog( void )
{
	std::cout << DEST_MSG << std::endl;
}

Dog::Dog( Dog const &src )
	: Animal(src)
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;
}

Dog & Dog::operator= (Dog const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "Baaaaaaaark bark bark :D" << std::endl;
}
