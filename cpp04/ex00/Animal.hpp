#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cctype>

class Animal {
    public:
	// canonic
	Animal( void );
	virtual ~Animal( void );
	Animal( Animal const &src);
	Animal & operator =( Animal const & rhs);

	virtual void makeSound( void ) const;
	virtual std::string getType( void ) const;
	
    protected:
	std::string type;
};


#endif