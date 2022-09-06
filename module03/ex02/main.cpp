#include "ClapTrapClass.hpp"
#include "ScavTrapClass.hpp"
#include "FragTrapClass.hpp"

int main() {

    std::string target = "Robert";
    FragTrap a("Jean");


    a.attack(target);
    a.highFivesGuys();
    std::cout << a.getEnergy()
        << "\n" << a.getHit() << "\n" << a.getDamage() << std::endl;
    return (0);
}