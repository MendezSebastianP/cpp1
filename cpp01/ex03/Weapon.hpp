
#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <cctype>

class Weapon {
    public:
        Weapon(std::string str);
        std::string const &getType(void);
        void setType(std::string str);

    private:
        std::string type_;
};


#endif