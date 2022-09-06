#include "ZombieClass.hpp"

Zombie* newZombie( std::string name);
void randomChump(std::string name);

int main() {

    Zombie* new_zombie_ptr ;

    new_zombie_ptr = newZombie("leOUF");
    delete new_zombie_ptr;
    randomChump("AIEAIEAIE");
    return 0;
}