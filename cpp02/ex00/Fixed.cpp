# include <iostream>
# include <cctype>
# include "Fixed.hpp"
# define CONST_MSG "Default constructor called"
# define DEST_MSG "Destructor called"
# define CPY_CONST_MSG "Copy constructor called"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define GRAW_MSG "getRawBits member function called"
# define SRAW_MSG "setRawBits member function called"

Fixed::Fixed( void )
{
	std::cout << CONST_MSG << std::endl;
	this->int1_ = 0;
}

Fixed::~Fixed( void )
{
	std::cout << DEST_MSG << std::endl;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	*this = src;
}

Fixed & Fixed::operator= (Fixed const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->int1_ = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << GRAW_MSG << std::endl;
	return (this->int1_);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << SRAW_MSG << std::endl;
	this->int1_ = raw;
}

