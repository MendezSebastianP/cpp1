# include <iostream>
# include <cctype>
# include "Cat.hpp"
# include "Animal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Cat called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Cat called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Cat called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Cat called\033[0m"

Cat::Cat( void )
	: Animal()
{
	this->type = "Cat";
	std::cout << CONST_MSG << std::endl;
}

Cat::~Cat( void )
{
	std::cout << DEST_MSG << std::endl;
}

Cat::Cat( Cat const &src )
	: Animal(src)
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;
}

Cat & Cat::operator= (Cat const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "Mew mew (I'm better than you) -.- " << std::endl;
}

