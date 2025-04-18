#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cctype>
# define MAX_HP 10

class Animal {
    public:
	// canonic
	Animal( void );
	~Animal( void );
	Animal( Animal const &src);
	Animal & operator =( Animal const & rhs);

	void makeSound( void );
	void getType( void );
	
    protected:
	std::string type;
};


#endif