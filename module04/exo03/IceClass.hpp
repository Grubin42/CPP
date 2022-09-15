#ifndef ICECLASS_HPP
# define ICECLASS_HPP
#include "AMateriaClass.hpp"

class Ice : public AMateria
{
public:
    //constructor
    Ice();
    Ice(const Ice & Ice);

    //destructor
    ~Ice();

    //opertor
    Ice & operator=(const Ice & Ice);

    //function membre
    AMateria *clone() const;
    void use(ICharactere & target);
};

#endif