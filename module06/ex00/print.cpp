#include "ConvertClass.hpp"

void Convert::ft_print_char(std::string arg)
{
    std::cout << "char: " << static_cast<char>(arg[0]) << std::endl;
    std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(arg[0]) << std::endl;
    std::cout << "double: " << static_cast<double>(arg[0]) << std::endl;
}

void Convert::ft_print_double(double arg)
{
    if (arg >= 32 && arg <= 126)
	    std::cout << "char: " << static_cast<char>(arg) << std::endl;
    else
        std::cout << "char: " << "is not printable" << std::endl;
    std::cout << "int: " << static_cast<int>(arg) << std::endl;
    std::cout  << std::fixed << std::setprecision(2) << "float: " << static_cast<float>(arg) << 'f' << std::endl;
    std::cout << "double: " << arg << std::endl;
}

void Convert::ft_print_int(int arg)
{
    if (arg >= 32 && arg <= 126)
	    std::cout << "char: " << static_cast<char>(arg) << std::endl;
    else
        std::cout << "char: " << "is not printable" << std::endl;
    std::cout << "int: " << (arg) << std::endl;
    std::cout << "float: " << static_cast<float>(arg) << std::endl;
    std::cout << "double: " << static_cast<double>(arg) << std::endl;
}

void Convert::ft_print_float(float arg)
{
    if (arg >= 32 && arg <= 126)
	    std::cout << "char: " << static_cast<char>(arg) << std::endl;
    else
        std::cout << "char: " << "is not printable" << std::endl;
	std::cout << "int: " << static_cast<int>(arg) << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "float: " << arg << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(arg) << std::endl;    
}

void Convert::ft_print_nan(std::string str, int opt)
{

	std::cout << "char: " << "is impossible" << std::endl;
	std::cout << "int: " << "is impossible" << std::endl;
	if (opt >= 0 && opt <= 2)
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.erase(str.length() - 1) << std::endl;
	}
	else
	{
		std::cout << "float: " << str + 'f' << std::endl;
		std::cout << "double: " << str << std::endl;
	}
}