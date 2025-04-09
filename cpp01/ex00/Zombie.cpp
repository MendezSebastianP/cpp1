# include "Zombie.hpp"
# include <iostream>
# include <cctype>

void Zombie::announce( void )
{
    std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::namez( std::string name )
{
    this->name_ = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name_ << " has been destroyed." << std::endl;
}
