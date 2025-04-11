# include "HumanB.hpp"
# include <iostream>
# include <cctype>


HumanB::HumanB(std::string str) : name_(str), weapon_(NULL)
{
    this->name_ = str;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon_ = &weapon;
}

void    HumanB::attack(void)
{
    std::string weapon1;

    if (this->weapon_ != NULL)
        weapon1 = this->weapon_->getType();
    else
        weapon1 = "bare hands";
    std::cout << this->name_ << " attacks with their " << weapon1 << std::endl;
}
