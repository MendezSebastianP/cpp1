# include <iostream>
# include <cctype>
# include "Dog.hpp"
# include "A_Animal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Dog called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Dog called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Dog called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Dog called\033[0m"

Dog::Dog( void )
	: A_Animal()
{
	this->type = "Dog";
	this->brain_ = new Brain();
	std::cout << CONST_MSG << std::endl;
}

Dog::~Dog( void )
{
	delete this->brain_;
	std::cout << DEST_MSG << std::endl;
}

Dog::Dog( Dog const &src )
	: A_Animal(src)
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

void	Dog::getIdea( void ) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->brain_->getIdea(i) << "; ";
	}
	std::cout << std::endl;
}

void	Dog::setIdea( std::string idea)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->brain_->setIdea(i, idea);
	}
}
