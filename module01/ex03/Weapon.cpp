#include "WeaponClass.hpp"

Weapon::Weapon(std::string type): _type(type) {
    
    std::cout << this->getType() << " is created" << std::endl;
    return;
}

Weapon::~Weapon(void) {

    std::cout << this->getType() << " is destructed" << std::endl;
    return;
}

const std::string & Weapon::getType(void) {

    return (this->_type);
}

void Weapon::setType(std::string new_type) {

    std::cout << this->_type << " transforms into " << new_type << std::endl;
    this->_type = new_type;
}