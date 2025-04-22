#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <cctype>
# include "A_Materia.hpp"

class Cure : public A_Materia
{
	protected:
	std::string type;

	public:
	Cure( void );
	virtual ~Cure( void );
	Cure( Cure const &type);
	Cure & operator =( Cure const & rhs);

	std::string const & getType() const; //Returns the materia type
	Cure* clone() const;
	void use(I_Character& target);
};

#endif