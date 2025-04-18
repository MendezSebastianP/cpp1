#include <iostream>
#include "Fixed.hpp"


int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(b);
	Fixed d(10.f);
	Fixed e(10.f);
	std::cout << "Increment / decrement" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl << "Comparison" << std::endl;
	std::cout << "Op ==: " << std::boolalpha << (b == c) << std::endl;
	std::cout << "Op ==: " <<  std::boolalpha << (d == e) << std::endl;
	std::cout << "Op !=: " << std::boolalpha << (d != e) << std::endl;
	std::cout << "Op >=: " << std::boolalpha << (b >= c) << std::endl;
	std::cout << "Op <=: " << std::boolalpha << (a <= b) << std::endl;
	std::cout << "Op <: " << std::boolalpha << (a < b) << std::endl;
	std::cout << "Op >: " << std::boolalpha << (a > b) << std::endl;
	std::cout << std::endl << "Operations" << std::endl;
	std::cout << c - a << std::endl;
	std::cout << c + a << std::endl;
	std::cout << c * a << std::endl;
	std::cout << c / a << std::endl;
	std::cout << std::endl << "Max and min" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}

//////////  subjects main
// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }