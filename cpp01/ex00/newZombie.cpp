# include "Zombie.hpp"
# include <iostream>
# include <cctype>

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie;

    zombie->namez(name);
    zombie->announce();
    return (zombie);
}