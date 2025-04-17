#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap a( "Seb ");
	ScavTrap b( "ScavSeb");
	ScavTrap c( b );
	ScavTrap d;
	
	d = b;
	a.attack( "The corrector");
	b.attack( "The person next to you");
	b.takeDamage(9);
	b.beRepaired(3);
	b.takeDamage(7);
	c.beRepaired( 50 );
	d.guardGate();
	d.guardGate();
	for (size_t i = 0; i < 10; i++)
		b.takeDamage(10);
	b.attack( "The person next to you");
	return 0;
}
