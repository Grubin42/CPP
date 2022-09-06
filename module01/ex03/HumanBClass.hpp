#ifndef HUMANBCLASS_H
# define HUMANBCLASS_H
#include <iostream>
#include <string>
#include "WeaponClass.hpp"

class HumanB {

public:

    HumanB(std::string name);
    ~HumanB(void);
    void attack(void);
    std::string getName(void);
    void setWeapon(Weapon & type_weapon);

private:

    std::string _name;
    Weapon *_weapon;
};

#endif