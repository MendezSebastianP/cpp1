# include "Harl.hpp"
# include <iostream>
# include <cctype>

# define M_DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!"
# define M_INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define M_WARN "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
# define M_ERROR "This is unacceptable! I want to speak to the manager now."


void Harl::debug_( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << M_DEBUG << std::endl;
}

void Harl::info_( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << M_INFO << std::endl;
}

void Harl::warning_( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << M_WARN << std::endl;
}

void Harl::error_( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << M_ERROR << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    switch (i)
    {
    case 0:
        Harl::debug_();
        std::cout << std::endl;
        Harl::info_();
        std::cout << std::endl;
        Harl::warning_();
        std::cout << std::endl;
        Harl::error_();
        break;
    case 1:
        Harl::info_();
        std::cout << std::endl;
        Harl::warning_();
        std::cout << std::endl;
        Harl::error_();
        break;
    case 2:
        Harl::warning_();
        std::cout << std::endl;
        Harl::error_();
        break;
    case 3:
        Harl::error_();
        break;
    case 4:
        std::cerr << EXIT_ER << std::endl;
        break;
    }
    
}
