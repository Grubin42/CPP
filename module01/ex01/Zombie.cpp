#include "ZombieClass.hpp"

Zombie::Zombie(void){

    std::cout << "Zombie is BORN" << std::endl;
    return;
}

Zombie::~Zombie(void) {
  
    std::cout << this->_name << " Killed by Karl" << std::endl;
    return;
}

void Zombie::setName(std::string name) {

    this->_name = name;
}