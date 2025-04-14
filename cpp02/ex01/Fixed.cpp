# include "Fixed.hpp"
# define CONST_MSG "Default constructor called"
# define INT_MSG "Int constructor called"
# define FLOAT_MSG "Float constructor called"
# define DEST_MSG "Destructor called"
# define CPY_CONST_MSG "Copy constructor called"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define GRAW_MSG "getRawBits member function called"
# define SRAW_MSG "setRawBits member function called"

Fixed::Fixed( void )
{
	std::cout << CONST_MSG << std::endl;
	this->vfixe_ = 0;
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

Fixed &Fixed::operator= (Fixed const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->vfixe_ = rhs.getRawBits();
	return *this;
}

Fixed::Fixed( int const vfixe )
{
	std::cout << INT_MSG << std::endl;
	this->vfixe_ = vfixe << bits_n_;
}

Fixed::Fixed( float const vfixe )
{
	std::cout << FLOAT_MSG << std::endl;
	this->vfixe_ = roundf(vfixe * (1 << bits_n_));
}

int Fixed::getRawBits( void ) const
{
	// std::cout << GRAW_MSG << std::endl;
	return this->vfixe_;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << SRAW_MSG << std::endl;
	this->vfixe_ = raw;
}

float Fixed::toFloat ( void ) const
{
	return static_cast<float>(this->vfixe_) / (1 << bits_n_);
}

int Fixed::toInt ( void ) const
{
	return this->vfixe_ >> bits_n_;
}

std::ostream &operator<<( std::ostream &o,  Fixed const &rhs )
{
	o << rhs.toFloat();
	return o;
}