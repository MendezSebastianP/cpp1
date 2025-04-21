#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <cctype>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
	// canonic
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const &src);
	WrongCat & operator =( WrongCat const & rhs);

	void makeSound( void ) const;
};


#endif