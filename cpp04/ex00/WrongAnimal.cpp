# include <iostream>
# include <cctype>
# include "WrongAnimal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor WrongAnimal called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor WrongAnimal called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor WrongAnimal called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor WrongAnimal called\033[0m"

WrongAnimal::WrongAnimal( void )
	: type("Empty")
{
	std::cout << CONST_MSG << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << DEST_MSG << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;

}

WrongAnimal & WrongAnimal::operator= (WrongAnimal const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "... (WrongAnimal: mother nature tries to speak your lenguage but she can't)" << std::endl;
}

