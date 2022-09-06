#include "HumanAClass.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {

    std::cout << getName() << " is created" << std::endl;
    return;
}

HumanA::~HumanA(void) {

    std::cout << getName() << " is destructed" << std::endl;
    return;
}

std::string HumanA::getName(void) {

    return (this->_name);
}

void HumanA::attack(void) {

    std::cout << getName() << " attacks with their " << this->_weapon.getType() << std::endl;//this->_weapon.getType();
}

