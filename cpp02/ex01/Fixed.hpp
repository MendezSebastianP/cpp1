#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cctype>
# include <cmath>

class Fixed {
    public:
	// --------- canonic ----------- // 
	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const &src);
	Fixed & operator =( Fixed const &rhs);
	// ---------------------------- // 
	Fixed( int const vfixe );
	Fixed( float const vfixe );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

    private:
        int vfixe_;
		static const int bits_n_ = 8;
};

std::ostream &operator <<( std::ostream &o,  Fixed const &rhs );


#endif