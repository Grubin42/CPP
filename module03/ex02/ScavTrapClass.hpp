#ifndef SCAVTRAPCLASS_H
# define SCAVTRAPCLASS_H
#include <iostream>
#include <string>
#include "ClapTrapClass.hpp"

class ScavTrap : public ClapTrap {

public:
    //constructor
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);

    //destructor
    virtual ~ScavTrap(void);

    //member function    
    void attack(const std::string& target);
    void guardGate(void);
};

#endif