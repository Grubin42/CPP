#include "ZombieClass.hpp"

void randomChump(std::string name) {

    std::cout << name;
    Zombie zombie;
    zombie.setName(name);
    zombie.announce();
}