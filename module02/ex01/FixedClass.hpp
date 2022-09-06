#ifndef FIXEDCLASS_H
# define FIXEDCLASS_H
#include <iostream>
#include <string>
#include <cmath> 

class Fixed {

public:

    Fixed(void);
    Fixed(int const raw);
    Fixed(float const raw);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt( void ) const;
    static int ft_pow(const int nbr);

private:

    static int const _bits = 8;
    int _raw;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif