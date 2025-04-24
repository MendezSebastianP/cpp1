#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <cctype>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
	// canonic
	Cat( void );
	~Cat( void );
	Cat( Cat const &src);
	Cat & operator =( Cat const & rhs);

	void makeSound( void ) const;
	virtual void getIdea(void) const;
	virtual void setIdea( std::string idea);

	private:
	Brain* brain_;
};


#endif