# include <iostream>
# include <cctype>
# include "Brain.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Brain called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Brain called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Brain called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Brain called\033[0m"

Brain::Brain( void )
{
	std::cout << CONST_MSG << std::endl;
}

Brain::~Brain( void )
{
	std::cout << DEST_MSG << std::endl;
}

Brain::Brain( Brain const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas_[i] = src.ideas_[i];
	}

}

Brain & Brain::operator= (Brain const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas_[i] = rhs.ideas_[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index > 100)
	{
		std::cerr << "Brin->getIdea; Wrong index given (0:99)" << std::endl;
        return "";
    }
    return ideas_[index];
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
	{
        ideas_[index] = idea;
    }
}

