#include "ConvertClass.hpp"

Convert::Convert()
{
	this->_Double = 0;
	this->_Int = 0;
	this->_Float = 0;
}

Convert::Convert(const Convert& convert)
{
	*this = convert;
}

Convert &Convert::operator=(const Convert& rhs)
{
	if (this != &rhs)
	{
		this->_Int = rhs._Int;
		this->_Double = rhs._Double;
		this->_Float = rhs._Double;
	}
	return (*this);
}

Convert::~Convert()
{

}

int Convert::is_char(std::string arg)
{
    char c;

    c = arg[0];
    if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4'
		|| c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
        return (0);
    if ((c >= ' ' || c <= '~') && arg[1] == '\0')
        return (1);
	return (0);
}

int Convert::is_int(std::string arg)
{
    size_t i = 0;
	while ( i < arg.length())
	{
		if (isdigit(arg[i]) == true || arg[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}

int Convert::is_double(std::string arg)
{
	size_t i = 0;
	int point = 0;
	while (i < arg.length())
	{
		if (isdigit(arg[i]) == true || arg[i] == '.')
				i++;
		else
			return (0);
		if (arg[i] == '.')
			point++;
		if (arg[(arg.length() - 1)] == '.')
			return (0);
	}
	if (point != 1)
		return (0);
	return (1);
}

int Convert::is_float(std::string arg)
{
	int	point = 0;
	int nb_f = 0;

	if (arg[(arg.length() - 1)] == 'f')
	{
		for (size_t i = 0; i < arg.length(); i++)
		{
            if (arg[i] == '-')
                i++;
			if (isdigit(arg[i]) == true || arg[i] == '.' || arg[i] == 'f')
			{
				if (arg[i] == '.')
					point++;
				if (arg[i] == 'f')
					nb_f++;
			}
			else
				return (0);
		}
	}
	if (point == 1 && nb_f == 1)
		return (1);
	return (0);
}

int Convert::is_nan(std::string arg)
{
	std::string str2[6] = {"-inff", "+inff", "nanf", "+inf",  "-inf", "nan"};

	for (size_t i = 0; i < 6; i++)
	{
		if (arg == str2[i])
			return (i);
	}
	return (-1);
}