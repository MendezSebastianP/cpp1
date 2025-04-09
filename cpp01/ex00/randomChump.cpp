# include "Zombie.hpp"
# include <iostream>
# include <cctype>

void randomChump( std::string name )
{
    Zombie zombie;

    zombie.namez(name);
    zombie.announce();
}
