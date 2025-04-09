# include "HumanA.hpp"
# include <iostream>
# include <cctype>


HumanA::HumanA(std::string str, Weapon &weapon1) : name_(str), weapon_(weapon1)
{
    this->name_ = str;
}

void    HumanA::attack(void)
{
    std::string const& weapon1 = this->weapon_.getType();
    std::cout << this->name_ << " attacks with their " << weapon1 << std::endl;
}

