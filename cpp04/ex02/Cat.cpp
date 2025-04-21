# include <iostream>
# include <cctype>
# include "Cat.hpp"
# include "A_Animal.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Cat called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Cat called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Cat called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Cat called\033[0m"

Cat::Cat( void )
	: A_Animal()
{
	this->type = "Cat";
	this->brain_ = new Brain();
	std::cout << CONST_MSG << std::endl;
}

Cat::~Cat( void )
{
	delete this->brain_;
	std::cout << DEST_MSG << std::endl;
}

Cat::Cat( Cat const &src )
	: A_Animal(src)
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

void	Cat::getIdea( void ) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->brain_->getIdea(i) << "; ";
	}
	std::cout << std::endl;
}

void	Cat::setIdea( std::string idea)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->brain_->setIdea(i, idea);
	}
}
