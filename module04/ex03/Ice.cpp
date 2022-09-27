#include "IceClass.hpp"
#include "AMateriaClass.hpp"
#include "ICharactere.hpp"

//constructor
Ice::Ice(): AMateria("Ice") {

    std::cout << "constructor up" << std::endl;
}

Ice::Ice(const Ice & Ice): AMateria("Ice") {

    std::cout << "copy constructor up" << std::endl;
    *this = Ice;
}

//destructor
Ice::~Ice() {

    std::cout << "destructor up" << std::endl;
}

//opertor
Ice & Ice::operator=(const Ice & Ice) {

    std::cout << "copy assigment operator called" << std::endl;
    AMateria::operator=(Ice);
    return *this;
}

//function membre
AMateria *Ice::clone() const {

    AMateria *cloneIce = new Ice();
    return cloneIce;
}

void Ice::use(ICharactere & target) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}