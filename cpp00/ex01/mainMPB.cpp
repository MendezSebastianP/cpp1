#include <iostream>
#include <cctype>
#include "PhoneBook.class.hpp"

#define START_MSG "Welcome to the Archaic Phonebook :)"
#define BASE_MSG "Type \"ADD\" to save a new contact, \"SEARCH\" to find an existing contact, \"EXIT\" to quit the program"
#define INV_CMD "Invalid command, please try again"
#define EXIT_MSG "Thaks for using Archaic Phonebook! see you ;)"


int	main(void)
{
    std::string input;
    PhoneBook phonebook;
    Contact contact;

    std::cout << START_MSG  << std::endl;
    while (1)
    {
        std::cout << BASE_MSG  << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
            phonebook.ADD_CONTACT();
        else if (input == "SEARCH")
        {
            phonebook.SEARCH_CONTACT();
        }
        else if (input == "EXIT")
        {
            std::cout << EXIT_MSG  << std::endl;
            return (0);
        }
        else
        {
            std::cout << INV_CMD  << std::endl;
        }
    }
    return (1);
}
