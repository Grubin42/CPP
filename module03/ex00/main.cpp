#include "ClapTrapClass.hpp"

int main() {

    std::string target = "JEAN-LOUIS";
    int dmg_target = 3;
    int life_potion = 2;
    ClapTrap a;
    ClapTrap b("MARCEL");
    ClapTrap c(a);
    a = b;

    while (a.getHit() > 0) {
        
        std::cout << "\n"  << a.getName() << " have " << a.getEnergy() << " energy"<< " and "
            << a.getHit() << " life points" << "\n" << std::endl;
        a.attack(target);
        std::cout << target << " attacks " << a.getName() << " for "
            << dmg_target << " point of damage" << std::endl;
        a.takeDamage(dmg_target);
        a.beRepaired(life_potion);
        a.setDamage(2);
    }
    std::cout << a.getName() << " IS DEAD" << std::endl;
    return (0);
}