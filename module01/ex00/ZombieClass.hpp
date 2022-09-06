#ifndef ZOMBIECLASS_H
# define ZOMBIECLASS_H
#include <iostream>
#include <string>

class Zombie {

public:

    Zombie(void);
    ~Zombie(void);
    void announce(void);
    void setName(std::string name);

private:

    std::string _name;

};

#endif