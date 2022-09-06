#include "WeaponClass.hpp"
#include "HumanBClass.hpp"
#include "HumanAClass.hpp"

int main() {

    {
        Weapon pistol = Weapon("pistol");
        HumanA bob("Bob", pistol);
        bob.attack();
        pistol.setType("knife");
        bob.attack();
    }
    {
        Weapon pistol = Weapon("pistol");
        HumanB jim("Jim");
        jim.setWeapon(pistol);
        jim.attack();
        pistol.setType("knife");
        jim.attack();
    }

    return 0;
}