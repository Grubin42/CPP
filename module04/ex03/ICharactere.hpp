#ifndef ICHARACTERECLASS_HPP
# define ICHARACTERECLASS_HPP
#include <iostream>

class AMateria;

class ICharactere
{
public:
    virtual ~ICharactere() {};
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria * m) = 0;
    virtual void unequip(int index) = 0;
    virtual void use(int index, ICharactere & target) = 0;
};

#endif