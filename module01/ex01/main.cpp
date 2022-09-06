#include "ZombieClass.hpp"

Zombie* zombieHorde( int nb_zombie, std::string name );

int main(int ac, char **av) {

    if (ac != 2)
        return 0;
    Zombie* horde;
    int nb_zombie = 10;
    horde = zombieHorde(nb_zombie, av[1]);
    delete [] horde;
    return (0);
}