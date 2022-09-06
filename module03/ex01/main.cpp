#include "ClapTrapClass.hpp"
#include "ScavTrapClass.hpp"

int main() {

    std::string target = "Robert";
    ScavTrap a;
    ScavTrap b("Jean");
    ScavTrap c(a);
    a = b;

    a.attack(target);
    a.guardGate();
    std::cout << a.getEnergy()
        << "\n" << a.getHit() << "\n" << a.getDamage() << std::endl;
    return (0);
}