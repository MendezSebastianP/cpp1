# include <iostream>
# include <cctype>
# include "Dog.hpp"
# define CONST_MSG "\033[1;32mDefault constructor Dog called\033[0m"
# define CONST_N_MSG "\033[1;32mParametizered constructor Dog called, name: \033[0m"
# define CPY_CONST_MSG "\033[1;32mCopy constructor Dog called\033[0m"
# define CPY_ASSIG_OP_MSG "Copy assignment operator called"
# define DEST_MSG "\033[1;31mDestructor Dog called\033[0m"

Dog::Dog( void )
	: Name_("Empty"), Hit_points_(MAX_HP), Energy_points_(10), Attac_damage_(10)
{
	std::cout << CONST_MSG << std::endl;
}

Dog::Dog( std::string Name )
	: Name_(Name), Hit_points_(MAX_HP), Energy_points_(10), Attac_damage_(10)
{
	std::cout << CONST_N_MSG << Name << std::endl;
	this->Name_ = Name;
}

Dog::~Dog( void )
{
	std::cout << DEST_MSG << " for Name: " << Name_ << std::endl;
}

Dog::Dog( Dog const &src )
{
	std::cout << CPY_CONST_MSG << std::endl;
	this->Name_ = src.Name_;
	this->Attac_damage_ = src.Attac_damage_;
	this->Energy_points_ = src.Energy_points_;
	this->Hit_points_ = src.Hit_points_;
}

Dog & Dog::operator= (Dog const & rhs)
{
	std::cout << CPY_ASSIG_OP_MSG << std::endl;
	this->Name_ = rhs.Name_;
	this->Attac_damage_ = rhs.Attac_damage_;
	this->Energy_points_ = rhs.Energy_points_;
	this->Hit_points_ = rhs.Hit_points_;
	return *this;
}

void	Dog::attack( const std::string& target )
{
	if (this->Hit_points_ == 0)
	{
		std::cout << "Dog " << this->Name_ << " is already dead so it can't attack" 
			<< std::endl;
		return ;
	}
	else if (this->Energy_points_ == 0)
	{
		std::cout << "Dog " << this->Name_ << " has no energy enough to attack" 
			<< std::endl;
		return ;
	}
	this->Energy_points_--;
	std::cout << "Dog " << this->Name_ << "\033[0;31m attacks \033[0m" << target << ", causing "
		<< this->Attac_damage_ << " points of damage! Energy left: " << this->Energy_points_ << std::endl;
}

void	Dog::takeDamage( unsigned int amount )
{
	if (this->Hit_points_ == 0)
	{
		std::cout << "Dog " << this->Name_ << " is already dead so it can't take damamage" 
			<< std::endl;
		return ;
	}
	else if (static_cast<unsigned int>(this->Hit_points_) < amount)
		this->Hit_points_ = 0;
	else
		this->Hit_points_ -= amount;
	std::cout << "Dog " << this->Name_ << " took  " << amount 
		<< " points of damage. Current HP " << this->Hit_points_ << std::endl;
}

void Dog::beRepaired( unsigned int amount )
{
	if (this->Energy_points_ == 0)
	{
		std::cout << "Dog " << this->Name_ << " has no energy enough to be repaired" 
			<< std::endl;
		return ;
	}
	else
	{
		if (this->Hit_points_ + amount > MAX_HP )
			this->Hit_points_ = MAX_HP;
		else
			this->Hit_points_ += amount;
		this->Energy_points_--;
		std::cout << "Dog " << this->Name_ << "\033[0;32m Has been repaired \033[0m" << ", in "
			<< amount << " points of damage! HP left: " << this->Hit_points_ << ". Energy left: " << this->Energy_points_ << std::endl;
	}
}

