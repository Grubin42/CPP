#include "MateriaSourceClass.hpp"
#include "CureClass.hpp"
#include "IceClass.hpp"

MateriaSource::MateriaSource() {

    for (int i = 0; i < MateriaSource::_size; i++)
        this->_tabMateria[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & MateriaSource) {

    *this = MateriaSource;
}

MateriaSource::~MateriaSource() {

    for (int i = 0; i < MateriaSource::_size; i++) 
        delete this->_tabMateria[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs) {

    if (&rhs == this)
        return *this;
    for (int i = 0; i < MateriaSource::_size; i++) {
        if (rhs._tabMateria[i])
            this->_tabMateria[i] = rhs._tabMateria[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria * m) {

    if (!m)
        return;
     for (int i = 0; i < MateriaSource::_size; i++) {
        if (!this->_tabMateria[i]) {
            this->_tabMateria[i] = m->clone();
            return;
        }
     }
}

AMateria *MateriaSource::createMateria(std::string const & type) {

    for (int i = 0; i < MateriaSource::_size; i++) {
        if (this->_tabMateria[i] && type == this->_tabMateria[i]->getType())
            return this->_tabMateria[i]->clone();
    }
    return NULL;
}
