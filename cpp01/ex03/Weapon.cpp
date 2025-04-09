# include "Weapon.hpp"
# include <iostream>
# include <cctype>

Weapon::Weapon(std::string str)
{
    setType(str);
}

void Weapon::setType(std::string str)
{
    this->type_ = str;
}

std::string const &Weapon::getType(void)
{
    std::string const &type = type_;
    return (type);
}
