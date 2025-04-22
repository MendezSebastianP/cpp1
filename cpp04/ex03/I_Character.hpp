#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP
# include <iostream>
# include <cctype>
# include "Materias/A_Materia.hpp"
# define N_MATERIA 4

class I_Character
{
	public:
	virtual ~I_Character() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(A_Materia* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, I_Character& target) = 0;

	private:
	A_Materia *materia_[N_MATERIA];
};

# endif