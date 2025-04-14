#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <cctype>

class ClapTrap {
    public:
	// canonic
	ClapTrap( void );
	ClapTrap( std::string Name );
	~ClapTrap( void );
	ClapTrap( ClapTrap const &src);
	ClapTrap & operator =( ClapTrap const & rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

    private:
        std::string Name_;
		int Hit_points_ = 10;
		int Energy_points_ = 10;
		int Attac_damage_ = 10;
};


#endif