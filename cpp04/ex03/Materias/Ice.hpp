#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <cctype>
# include "A_Materia.hpp"

class Ice : public A_Materia
{
	// protected:
	// std::string type;

	public:
	Ice( void );
	virtual ~Ice( void );
	Ice( Ice const &type);
	Ice & operator =( Ice const & rhs);

	std::string const & getType() const; //Returns the materia type
	Ice* clone() const;
	void use(I_Character& target);
};

#endif