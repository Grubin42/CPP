#ifndef FIXEDCLASS_H
# define FIXEDCLASS_H
#include <iostream>
#include <string>

class Fixed {

public:

    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);

private:

    static int const _bits = 8;
    int _raw;

};

#endif