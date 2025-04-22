#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <cctype>
# include "I_Character.hpp"
# include "Materias/A_Materia.hpp"

class Character : public I_Character
{
	public:
	Character( void );
	Character( std::string name );
	~Character();
	Character( Character const &src);
	Character & operator =( Character const & rhs);

	virtual std::string const &getName() const;
	virtual void equip(A_Materia* m);
	virtual void unequip(int idx);
	virtual void use(int idx, I_Character& target);

	private:
	A_Materia *materia_[N_MATERIA];
	std::string name_;
	int nmateria_;
};

# endif