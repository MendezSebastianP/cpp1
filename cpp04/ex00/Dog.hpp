#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <cctype>
# include "Animal.hpp"

class Dog : public Animal 
{
    public:
	// canonic
	Dog( void );
	~Dog( void );
	Dog( Dog const &src);
	Dog & operator =( Dog const & rhs);
};


#endif