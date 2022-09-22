#include "ConvertClass.hpp"

int main (int argc, char **argv)
{
    Convert conv;

    if (argc != 2)
    {
       std::cout << "error arguments" << std::endl;
       return (1);
    }
    if (conv.is_double(argv[1]) == 1)
       conv.ft_print_double(conv.change_double(argv[1]));
    else if (conv.is_char(argv[1]) == 1)
        conv.ft_print_char(argv[1]);
    else if (conv.is_int(argv[1]) == 1)
        conv.ft_print_int(conv.change_int(argv[1]));
    else if (conv.is_float(argv[1]) == 1)
        conv.ft_print_float(conv.ft_float(argv[1]));
    else if (conv.is_nan(argv[1]) != - 1)
		conv.ft_print_nan(argv[1], conv.is_nan(argv[1]));
    else 
        std::cout << "Error " << argv[1] << " is not a argument valide" << std::endl;
    return (0);
}