
#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <cctype>
# define EXIT_ER "Wrong level passed in parameters."
# define SEP "___________________________________ LEVEL(S) ________________________________________"



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