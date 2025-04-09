#include <iostream>
#include <cctype>
#include "Zombie.hpp"

int	main(void)
{
    Zombie *new1;

    randomChump("Seb");
    new1 = newZombie("lel");
    delete new1;
	return (0);
}
