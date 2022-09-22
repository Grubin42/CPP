#include "ConvertClass.hpp"

double Convert::change_double(const std::string& arg)
{
    try
    {
        if (std::istringstream(arg) >> this->_Double)
	    	return(this->_Double);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Bug with max double or min double" << std::endl;
    exit (0);
}

int Convert::change_int(const std::string& arg)
{
    try
    {
        if (std::istringstream(arg) >> this->_Int)
            return(this->_Int);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Bug with max int or min int" << std::endl;
    exit (0);
}

float Convert::ft_float(const std::string& arg)
{
    return (atof(arg.c_str()));
}