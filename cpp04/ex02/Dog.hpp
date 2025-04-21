#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <cctype>
# include "A_Animal.hpp"
# include "Brain.hpp"

class Dog : public A_Animal 
{
    public:
	// canonic
	Dog( void );
	~Dog( void );
	Dog( Dog const &src);
	Dog & operator =( Dog const & rhs);

	void makeSound( void ) const;
	virtual void getIdea(void) const;
	virtual void setIdea( std::string idea);
	
	private:
	Brain* brain_;
};


#endif