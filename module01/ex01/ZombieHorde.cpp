#include "ZombieClass.hpp"

Zombie* zombieHorde( int nb_zombie, std::string name ) {

    Zombie* zombieHorde = new Zombie[nb_zombie];

    for (int i = 0; i < nb_zombie; i++) {
        zombieHorde[i].setName(name);
        std::cout << "BWWWAAARRRGGG" << std::endl;
    }
    return zombieHorde;
}