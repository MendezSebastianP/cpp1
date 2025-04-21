#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP
# include <iostream>
# include <cctype>

class A_Animal {
    public:
	// canonic
	A_Animal( void );
	virtual ~A_Animal( void );
	A_Animal( A_Animal const &src);
	A_Animal & operator =( A_Animal const & rhs);

	virtual void makeSound( void ) const = 0;
	virtual std::string getType( void ) const;
	
    protected:
	std::string type;
};


#endif