#ifndef CONVERTCLASS_HPP
# define CONVERTCLASS_HPP
#include <iostream>
#include <sstream>
#include <iomanip>

class Convert
{
    public:
        Convert();
        Convert(const Convert& other);
        Convert &operator=(const Convert& rhs);
        ~Convert();

        // fonction de recherche de type
        int is_int(std::string arg);
        int is_float(std::string arg);
        int is_char(std::string arg);
        int is_double(std::string arg);
        int is_nan(std::string arg);

        // fonction de transformation
        float ft_float(const std::string& arg);
        int change_int(const std::string& arg);
        double change_double(const std::string& arg);

        // fonction d affichage
        void ft_print_char(std::string arg);
        void ft_print_double(double arg);
        void ft_print_int(int arg);
        void ft_print_float(float arg);
        void ft_print_nan(std::string str, int opt);

    private:
        double      _Double;
        float       _Float;
        int         _Int;
};

#endif