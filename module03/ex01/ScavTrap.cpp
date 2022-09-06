#include "ScavTrapClass.hpp"

//constructor-------------------------------------------
ScavTrap::ScavTrap(void) {
   
    setHit(100);
    setEnergy(50);
    setDamage(20);
    std::cout << getName() << " ScavTrap constructor up" << std::endl;
    return; 
}

ScavTrap::ScavTrap(std::string name) {

    setName(name);
    setHit(100);
    setEnergy(50);
    setDamage(20);
    std::cout << getName() << " ScavTrap with string constructor up" << std::endl;
    return;    
}

ScavTrap::ScavTrap(ScavTrap const & src) {
   
    std::cout << "ScavTrap copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor---------------------------------------------
ScavTrap::~ScavTrap(void) {

    std::cout << getName() << " ScavTrap destructor up" << std::endl;
    return;
}

//member function--------------------------------------------
void ScavTrap::attack(const std::string& target) {

    int energy = getEnergy() - 1;

    if (getEnergy() <= 0) {

        std::cout << getName() << " has no more energy to perform this action" << std::endl;
        return;
    }
    else if (getHit() <= 0) {

        std::cout << getName() << " is dead" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << getName() << " attacks " << target << " , "
        << "causing " << getDamage() << " points of damage!" << std::endl;
    setEnergy(energy);
    return;
}

void ScavTrap::guardGate(void) {

    std::cout << getName() << " Mode Gate keeper activate." << std::endl;
    return;
}