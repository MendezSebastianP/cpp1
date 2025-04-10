
#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <cctype>

class Harl {
    public:
    void complain( std::string level );

    private:
    void debug_( void );
    void info_( void );
    void warning_( void );
    void error_( void );
};

#endif