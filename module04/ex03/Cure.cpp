#include "CureClass.hpp"
#include "AMateriaClass.hpp"
#include "ICharactere.hpp"

//constructor
Cure::Cure(): AMateria("Cure") {

    std::cout << "constructor up" << std::endl;
}

Cure::Cure(const Cure & Cure): AMateria("Cure") {

    std::cout << "copy constructor up" << std::endl;
    *this = Cure;
}

//destructor
Cure::~Cure() {

    std::cout << "destructor up" << std::endl;
}

//opertor
Cure & Cure::operator=(const Cure & Cure) {

    std::cout << "copy assigment operator called" << std::endl;
    AMateria::operator=(Cure);
    return *this;
}

//function membre
AMateria *Cure::clone() const {

    AMateria *cloneCure = new Cure();
    return cloneCure;
}

void Cure::use(ICharactere & target) {

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}