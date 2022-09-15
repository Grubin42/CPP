#ifndef MATERIASOURCECLASS_HPP
# define MATERIASOURCECLASS_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    static const int _size = 4;
    AMateria * _tabMateria[_size];

public:
    MateriaSource();
    MateriaSource(const MateriaSource & MateriaSource);
    ~MateriaSource();
    MateriaSource & operator=(const MateriaSource & rhs);
    void learnMateria(AMateria * m);
    AMateria *createMateria(std::string const & type);
};


#endif