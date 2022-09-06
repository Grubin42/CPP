#include "HumanBClass.hpp"

HumanB::HumanB(std::string name): _name(name) {

    std::cout << getName() << " is created" << std::endl;
    return;
}

HumanB::~HumanB(void) {

    std::cout << getName() << " is destructed" << std::endl;
    return;
}

std::string HumanB::getName(void) {

    return (this->_name);
}

void HumanB::attack(void) {

    std::cout << getName() << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon & type_weapon) {

    this->_weapon = &type_weapon;
}
