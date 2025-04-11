#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <cctype>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string str);
        void attack( void );
        void setWeapon(Weapon &weapon);

    private:
        std::string name_;
        Weapon *weapon_;
};


#endif