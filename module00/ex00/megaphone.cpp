#include <iostream>
#include <string>

int main(int ac, char **av)
{
    std::string str;

    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < ac; i++)
        {
            str = av[i];
            for(size_t j = 0; j < str.length(); j++)
                str[j] = toupper(str[j]);
            std::cout << str << "";
        }
        std::cout << std::endl;
    }
    return 0;
}