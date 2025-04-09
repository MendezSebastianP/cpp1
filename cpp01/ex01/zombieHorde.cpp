# include "Zombie.hpp"
# include <iostream>
# include <cctype>

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie *zombie = new Zombie[N];

    while (i < N)
    {
        zombie[i].namez(name);
        zombie[i].announce();
        i++;
    }
    return (zombie);
}