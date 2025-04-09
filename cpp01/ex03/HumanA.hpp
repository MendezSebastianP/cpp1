#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <cctype>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string str, Weapon &weapon);
        void attack( void );
    
    private:
        std::string name_;
        Weapon &weapon_;
};


#endif