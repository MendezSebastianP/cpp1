# include <iostream>
# include <cctype>
# include "ClapTrap.hpp"


ClapTrap::ClapTrap( void )
{
	std::cout << CONST_MSG << std::endl;
}

ClapTrap::ClapTrap( std::string Name )
{
	std::cout << CONST_MSG << std::endl;
	this->Name_ = Name;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << DEST_MSG << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator= (ClapTrap const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->int1_ = rhs.getRawBits();
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	std::cout << "ClapTrap " << this->Name_ << " attacks " << target << ", causing "
		<< this->Attac_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->Name_ << " attacks " << target << ", causing "
		<< this->Attac_damage_ << " points of damage!" << std::endl;
}

