# include <iostream>
# include <cctype>
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor WrongCat called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor WrongCat called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor WrongCat called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor WrongCat called\033[0m"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << CONST_MSG << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << DEST_MSG << std::endl;
}

WrongCat::WrongCat( WrongCat const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->type = src.type;
}

WrongCat & WrongCat::operator= (WrongCat const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound( void ) const
{
std::cout << "Mew mew (I'm better than you) -.-" << std::endl;
}

