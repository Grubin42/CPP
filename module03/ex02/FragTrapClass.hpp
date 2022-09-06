#ifndef FRAGTRAPCLASS_H
# define FRAGTRAPCLASS_H
#include <iostream>
#include <string>
#include "ClapTrapClass.hpp"

class FragTrap : public ClapTrap {

public:
    //constructor
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);

    //destructor
    virtual ~FragTrap(void);

    //member function    
    void attack(const std::string& target);
    void guardGate(void);
    void highFivesGuys(void);
};

#endif