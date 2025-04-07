#include <iostream>
#include <cctype>

# define DEFAULT_FEEDBACK "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

/*
 * main: Entry point of the program.
 *
 * This program behaves like a "megaphone" by converting any command-line arguments
 * to uppercase and printing them. If no arguments are provided, it prints a default
 * feedback message.
 *
 * Parameters:
 *  - argc: The count of command-line arguments.
 *  - argv: The array of command-line argument strings.
 *
 * Returns:
 *  - 0 on successful execution.
 */
int	main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << DEFAULT_FEEDBACK  << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (size_t j = 0; argv[i][j]; j++)
            {
                std::cout <<  (char)(std::toupper(argv[i][j]));
            }     
        }
        std::cout  << std::endl;
    }
	return (0);
}
