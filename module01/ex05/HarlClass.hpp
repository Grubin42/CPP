#ifndef HARLCLASS_H
# define HARLCLASS_H
#include <iostream>
#include <string>

class Harl {

public:

    Harl(void);
    ~Harl(void);
    void complain(std::string level);
    typedef void (Harl::*my_function)(void);

private:

    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);

};

#endif