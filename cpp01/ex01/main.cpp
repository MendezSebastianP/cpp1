#include <iostream>
#include <cctype>
#include "Zombie.hpp"

int	main(void)
{
    Zombie *new1;

    new1 = zombieHorde(3, "seb");
    delete [] new1;
	return (0);
}
