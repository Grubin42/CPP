#include "CharactereClass.hpp"

//constructor
Charactere::Charactere(std::string const & type): _name(type) {

    for (int i = 0; i < Charactere::_size; i++)
        this->_tabMateria[i] = NULL;
}

Charactere::Charactere(const Charactere & Charactere) {

    *this = Charactere;
}

//destructor
Charactere::~Charactere() {

    for (int i = 0; i < Charactere::_size; i++) {
        if (this->_tabMateria[i])
            delete this->_tabMateria[i];
    }
}

//opertor assigment
Charactere & Charactere::operator=(const Charactere & rhs) {

    if (&rhs == this)
        return *this;
    this->_name = rhs._name;
    for (int i = 0; i < Charactere::_size; i++) {
        if (this->_tabMateria[i]) {
            delete this->_tabMateria[i];
            this->_tabMateria[i] = NULL;
        }
        if (rhs._tabMateria[i])
            this->_tabMateria[i] = rhs._tabMateria[i]->clone();
    }
    return *this;
}

//function membre
std::string const & Charactere::getName() const {

    return this->_name;
}

void Charactere::equip(AMateria * m) {

    if (!m)
        return;
    for (int i = 0; i < Charactere::_size; i++) {
        if (!this->_tabMateria[i]) {
            this->_tabMateria[i] = m;
            return;
        }
    }
}

void Charactere::unequip(int index) {

    if (index < 0 || index >= Charactere::_size)
        return;
    this->_tabMateria[index] = NULL;
}

void Charactere::use(int index, ICharactere & target) {

    if (index < 0 || index >= Charactere::_size || !this->_tabMateria[index])
        return;
    this->_tabMateria[index]->use(target); 
}