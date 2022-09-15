#ifndef CURECLASS_HPP
# define CURECLASS_HPP
#include "AMateriaClass.hpp"

class Cure : public AMateria
{
public:
    //constructor
    Cure();
    Cure(const Cure & Cure);

    //destructor
    ~Cure();

    //opertor
    Cure & operator=(const Cure & Cure);

    //function membre
    AMateria *clone() const;
    void use(ICharactere & target);
};

#endif