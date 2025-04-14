#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cctype>

class Fixed {
    public:
	// canonic
	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const &src);
	Fixed & operator =( Fixed const & rhs);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

    private:
        int int1_;
		static const int bits_n_ = 8;
};


#endif