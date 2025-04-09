
#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP
# include <iostream>
# include <cctype>

class Zombie {
    public:
    void announce( void );
    void namez( std::string name );
    ~Zombie();
    
    private:
    std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif