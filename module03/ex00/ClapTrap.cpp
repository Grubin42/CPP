#include "ClapTrapClass.hpp"

//constructor-------------------------------------------
ClapTrap::ClapTrap(void) {

    this->_name = "Pierre";
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << this->_name << "constructor up" << std::endl;
    return; 
}

ClapTrap::ClapTrap(std::string name): _name(name) {

    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << this->_name << " constructor up" << std::endl;
    return;    
}

ClapTrap::ClapTrap(ClapTrap const & src) {
   
    std::cout << "copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor---------------------------------------------
ClapTrap::~ClapTrap(void) {

    std::cout << this->_name << " destructor up" << std::endl;
    return;
}

//operator overload--------------------------------------
ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {

    if (this != &rhs) {
        this->_attack_damage = rhs.getDamage();
        this->_energy_points = rhs.getEnergy();
        this->_hit_points = rhs.getHit();
        this->_name = rhs.getName();
    }

    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

//accessor-------------------------------------------------
std::string ClapTrap::getName(void) const {

    return (this->_name);
}

int ClapTrap::getHit(void) const{

    return (this->_hit_points);
}

int ClapTrap::getEnergy(void) const{

    return (this->_energy_points);
}

int ClapTrap::getDamage(void) const{

    return (this->_attack_damage);
}

//setor-----------------------------------------------------
void ClapTrap::setDamage(int const damage) {

    this->_attack_damage = damage;
}

void ClapTrap::setHit(int const hit) {

    this->_hit_points = hit;
}

void ClapTrap::setEnergy(int const energy) {

    this->_energy_points = energy;
}

//member function--------------------------------------------
void ClapTrap::attack(const std::string& target) {

    int energy = getEnergy() - 1;

    if (getEnergy() <= 0) {

        std::cout << getName() << " has no more energy to perform this action" << std::endl;
        return;
    }
    else if (getHit() <= 0) {

        std::cout << getName() << " is dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << getName() << " attacks " << target << " , "
        << "causing " << getDamage() << " points of damage!" << std::endl;
    setEnergy(energy);
    return;
}

void ClapTrap::takeDamage(unsigned int amount) {

    int tmp = getHit() - amount;

    if (getHit() <= 0) {
        
        std::cout << getName() << " is dead stop shooting him" << std::endl;
        return; 
    }
    setHit(tmp);
    return;
}

void ClapTrap::beRepaired(unsigned int amount) {

    int tmp = getHit() + amount;
    int energy = getEnergy() - 1;

    if (getEnergy() <= 0) {

        std::cout << getName() << " has no more energy to perform this action" << std::endl;
        return;
    }
    else if (getHit() <= 0) {

        std::cout << getName() << " is dead" << std::endl;
        return;
    }
    setHit(tmp);
    setEnergy(energy);
    return;
}