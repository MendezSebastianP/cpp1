#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP
# include <iostream>
# include <cctype>
# include "../I_Character.hpp"
# define N_MATERIA 4

class I_Character;

class A_Materia
{
	protected:
	std::string type;

	public:
	A_Materia( void );
	virtual ~A_Materia( void );
	A_Materia( A_Materia const &type);
	A_Materia & operator =( A_Materia const & rhs);

	std::string const & getType( void ) const; //Returns the materia type
	virtual A_Materia* clone() const = 0;
	virtual void use(I_Character& target);
};

# endif