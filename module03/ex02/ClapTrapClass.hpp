#ifndef CLAPTRAPCLASS_H
# define CLAPTRAPCLASS_H
#include <iostream>
#include <string>

class ClapTrap {

public:

    //constructor
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);

    //destructor
    virtual ~ClapTrap(void);

    //operator overload
    ClapTrap & operator=(ClapTrap const & rhs);

    //accessor
    std::string getName(void)const;
    int getHit(void)const;
    int getEnergy(void)const;
    int getDamage(void)const;

    //setor
    void setName(std::string name);
    void setDamage(int const damage);
    void setHit(int const hit);
    void setEnergy(int const energy);

    //member function    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);


private:

    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
};

#endif