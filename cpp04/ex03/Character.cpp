# include <iostream>
# include <cctype>
# include "Character.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Character called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Character called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Character called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Character called\033[0m"


Character::Character( void )
	: name_("Empty_name"), nmateria_(0)
{
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = NULL;
	}
	materia_[0] = NULL;
	std::cout << CONST_MSG << std::endl;
}

Character::Character( std::string name )
	: name_(name), nmateria_(0)
{
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = NULL;
	}
	materia_[0] = NULL;
	std::cout << CONST_N_MSG << std::endl;
}

Character::~Character( void )
{
	std::cout << DEST_MSG << std::endl;
}

Character::Character( Character const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	for (size_t i = 0; i < N_MATERIA; i++)
		this->materia_[i] = src.materia_[i];

}

Character & Character::operator= (Character const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	for (size_t i = 0; i < N_MATERIA; i++)
	{
		this->materia_[i] = rhs.materia_[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name_;
}

void Character::equip(A_Materia* m)
{
	if (nmateria_ < N_MATERIA)
	{
		for (size_t i = 0; this->materia_[i]; i++)
			this->materia_[i] = m;
		nmateria_++;
	}
}

void Character::unequip(int idx)
{
	if (idx < N_MATERIA && this->materia_[idx])
	{
		this->materia_[idx] = NULL;
		nmateria_--;
	}
}

void Character::use(int idx, I_Character& target)
{
	if(this->materia_[idx])
		this->materia_[idx]->use(target);
}



