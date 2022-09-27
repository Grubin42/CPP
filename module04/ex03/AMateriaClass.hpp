#ifndef AMATERIACLASS_HPP
# define AMATERIACLASS_HPP
#include <iostream>
#include "ICharactere.hpp"

class AMateria
{
protected:
    std::string p_type;

public:
    //constructeur
    AMateria(std::string const & type = "");
    AMateria(const AMateria & AMateria);
    //destructeur
    virtual ~AMateria();
    //operateur d'assignation
    virtual AMateria & operator=(const AMateria & rhs);
    //function membre
    std::string const & getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharactere & target);
};

#endif