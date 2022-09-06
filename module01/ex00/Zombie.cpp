#include "ZombieClass.hpp"

Zombie::Zombie(void) {

    std::cout << " is BORN" << std::endl;
    return;
}
/*
Zombie::Zombie(std::string name) : _name(name){

    std::cout << this->_name << " is BORN" << std::endl;
    return;
}*/
Zombie::~Zombie(void) {
  
    std::cout << this->_name << " Killed by an bullet in the mother fucker head" << std::endl;
    return;
}

void Zombie::announce(void) {

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {

    this->_name = name;
}