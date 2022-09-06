#include "FragTrapClass.hpp"

//constructor-------------------------------------------
FragTrap::FragTrap(void) {
   
    setHit(100);
    setEnergy(100);
    setDamage(30);
    std::cout << getName() << " FragTrap constructor up" << std::endl;
    return; 
}

FragTrap::FragTrap(std::string name) {

    setName(name);
    setHit(100);
    setEnergy(100);
    setDamage(30);
    std::cout << getName() << " FragTrap with string constructor up" << std::endl;
    return;    
}

FragTrap::FragTrap(FragTrap const & src) {
   
    std::cout << "FragTrap copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor---------------------------------------------
FragTrap::~FragTrap(void) {

    std::cout << getName() << " FragTrap destructor up" << std::endl;
    return;
}

//member function--------------------------------------------
void FragTrap::highFivesGuys(void) {

    std::cout << getName() << " High fives guys!" << std::endl;
    return;
}

void FragTrap::attack(const std::string& target) {

    int energy = getEnergy() - 1;

    if (getEnergy() <= 0) {

        std::cout << getName() << " has no more energy to perform this action" << std::endl;
        return;
    }
    else if (getHit() <= 0) {

        std::cout << getName() << " is dead" << std::endl;
        return;
    }
    std::cout << "FragTrap " << getName() << " attacks " << target << " , "
        << "causing " << getDamage() << " points of damage!" << std::endl;
    setEnergy(energy);
    return;
}