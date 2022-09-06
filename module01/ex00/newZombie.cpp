#include "ZombieClass.hpp"

Zombie* newZombie( std::string name ) {

    std::cout << name;
    Zombie* new_zombie = new Zombie();
    new_zombie->setName(name);
    new_zombie->announce();
    return new_zombie;
}