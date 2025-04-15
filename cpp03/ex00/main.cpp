#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a( "Seb ");
	ClapTrap b( a );
	ClapTrap c;
	
	c = b;
	a.attack( "The corrector");
	b.takeDamage(9);
	b.beRepaired(3);
	b.takeDamage(7);
	c.beRepaired( 50 );
	return 0;
}