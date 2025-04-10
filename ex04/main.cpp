#include <iostream>
#include <fstream>

# define ER_ARG "Wrong number of arguments, put [file_to_read] [word_to_find] [word_to_replace]"
# define ER_READ "Impossible to read the file"
#define ER_WRITE "Failed to create output file"

char    *readfile(char *filename, int &length)
{
    char *buffer;

    std::ifstream is (filename, std::ifstream::binary);
    if (is)
    {
        is.seekg (0, is.end);
        length = is.tellg();
        is.seekg (0, is.beg);
    }
    else
    {
        std::cerr << ER_READ << std::endl;
        return (NULL);
    }
    buffer = new char [length];
    is.read (buffer,length);
    if (!(is))
    {
        std::cerr << ER_READ << std::endl;
        delete [] buffer;
        return (NULL);
    }
    is.close();
    return (buffer);
}

int	main(int argc, char **argv)
{
    char *buffer;
    int length = 0;
    std::string replacefile;


    if (argc != 4)
    {
        std::cerr << ER_ARG << std::endl;
        return (1);
    }
    buffer = readfile(argv[1], length);
    if (!buffer)
        return (1);
    replacefile = argv[1];
    replacefile += ".replace";
    std::ofstream output_file(replacefile.c_str());
    if (!output_file) {
        std::cerr << ER_WRITE << std::endl;
        delete[] buffer;
        return 1;
    }
    for (int i = 0, j = 0; i < length; i++)
    {
        j = 0;
        if (buffer[i] == argv[2][j])
        {
            while (buffer[i + j]  && argv[2][j] && buffer[i + j]  == argv[2][j])
                j++;
            if (!argv[2][j])
            {
                output_file << argv[3];
                i += j - 1;
            }
            else
                output_file << buffer[i];
        }
        else
            output_file << buffer[i];
    }
    output_file << std::endl;
    delete[] buffer; 
    return (0);
}
