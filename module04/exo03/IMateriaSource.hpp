#ifndef IMATERIASOURCECLASS_HPP
# define IMATERIASOURCECLASS_HPP
#include "AMateriaClass.hpp"

class AMateria;

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {};
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const & type) = 0;
};

#endif