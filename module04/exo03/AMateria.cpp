#include "AMateriaClass.hpp"

//constructeur
AMateria::AMateria(std::string const & type): p_type(type) {

    std::cout << "init type constructor create" << std::endl;
}

AMateria::AMateria(const AMateria & AMateria) {

    *this = AMateria;
    std::cout << "copy constructor create" << std::endl;
}

//destructeur
AMateria::~AMateria() {

    std::cout << "destructor create" << std::endl;
}

//operateur d'assignation
AMateria & AMateria::operator=(const AMateria & rhs) {

    std::cout << "copy assigment operator called" << std::endl;
    if (this != &rhs)
        this->p_type = rhs.p_type;
    return *this;
}

//function membre
std::string const & AMateria::getType(void) const {

    return p_type;
}

void AMateria::use(ICharactere & target) {

    std::cout << "do something to" << target.getName() << std::endl;
}