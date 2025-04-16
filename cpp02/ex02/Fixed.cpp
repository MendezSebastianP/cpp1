# include "Fixed.hpp"
# define CONST_MSG "Default constructor called"
# define INT_MSG "Int constructor called"
# define FLOAT_MSG "Float constructor called"
# define DEST_MSG "Destructor called"
# define CPY_CONST_MSG "Copy constructor called"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define GRAW_MSG "getRawBits member function called"
# define SRAW_MSG "setRawBits member function called"
# define DEBUG_MODE_CONST_DEST false
# define DEBUG_M_FUN false
# define M_FUN_MSG "The falllowing member function has been called: "

Fixed::Fixed( void )
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << CONST_MSG << std::endl;
	this->vfixe_ = 0;
}


Fixed::~Fixed( void )
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << DEST_MSG << std::endl;
}

Fixed::Fixed( Fixed const &src )
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << CPY_CONST_MSG << std::endl;
	*this = src;
}

Fixed &Fixed::operator= (Fixed const & rhs)
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->vfixe_ = rhs.getRawBits();
	return *this;
}

Fixed &Fixed::operator++( void )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	this->vfixe_++;
	return *this;
}

Fixed Fixed::operator++( int )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed Fixed::operator+( Fixed const &rhs )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-( Fixed const &rhs )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const &rhs )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const &rhs )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	return (this->toFloat() / rhs.toFloat());
}

Fixed::Fixed( int const vfixe )
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << INT_MSG << std::endl;
	this->vfixe_ = vfixe << bits_n_;
}

Fixed::Fixed( float const vfixe )
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << FLOAT_MSG << std::endl;
	this->vfixe_ = roundf(vfixe * (1 << bits_n_));
}

int Fixed::getRawBits( void ) const
{
	if (DEBUG_MODE_CONST_DEST)
		std::cout << GRAW_MSG << std::endl;
	return this->vfixe_;
}

void Fixed::setRawBits( int const raw )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	std::cout << SRAW_MSG << std::endl;
	this->vfixe_ = raw;
}

float Fixed::toFloat ( void ) const
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	return static_cast<float>(this->vfixe_) / (1 << bits_n_);
}

int Fixed::toInt ( void ) const
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	return this->vfixe_ >> bits_n_;
}

std::ostream &operator<<( std::ostream &o,  Fixed const &rhs )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	o << rhs.toFloat();
	return o;
}

Fixed Fixed::max( Fixed &a, Fixed &b )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

Fixed Fixed::max( Fixed const &a, Fixed const &b )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

Fixed Fixed::min( Fixed &a, Fixed &b )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}

Fixed Fixed::min( Fixed const &a, Fixed const &b )
{
	if (DEBUG_M_FUN)
		std::cout << M_FUN_MSG << __func__ << std::endl;
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}