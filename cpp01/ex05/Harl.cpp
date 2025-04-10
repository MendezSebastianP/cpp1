# include "Harl.hpp"
# include <iostream>
# include <cctype>

# define M_DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!"
# define M_INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define M_WARN "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
# define M_ERROR "This is unacceptable! I want to speak to the manager now."
# define EXIT_ER "Wrong level passed in parameters."

void Harl::debug_( void )
{
    std::cout << M_DEBUG << std::endl;
}

void Harl::info_( void )
{
    std::cout << M_INFO << std::endl;
}

void Harl::warning_( void )
{
    std::cout << M_WARN << std::endl;
}

void Harl::error_( void )
{
    std::cout << M_ERROR << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fptr[4])() = {&Harl::debug_, &Harl::info_, &Harl::warning_, &Harl::error_};
    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*fptr[i])();
            return ;
        }
        i++;
    }
    std::cerr << EXIT_ER << std::endl;
}
