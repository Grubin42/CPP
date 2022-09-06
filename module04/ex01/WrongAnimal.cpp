#include "WrongAnimalClass.hpp"

//constructor
WrongAnimal::WrongAnimal(void) {

    std::cout << "WrongAnimal constructor up" << std::endl;
    return; 
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {

    std::cout << "WrongAnimal copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor
WrongAnimal::~WrongAnimal(void) {

    std::cout << "WrongAnimal destructor up" << std::endl;
    return;
}

//operator overload
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {

    if (this != &rhs) {
        this->p_type = rhs.p_type;
    }
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    return(*this);
}

//accessor
std::string WrongAnimal::getType(void) const {

    return (this->p_type);
}

//setor
void WrongAnimal::setType(std::string new_type) {

    this->p_type = new_type;
}

//member function    
void WrongAnimal::makeSound(void) const {

    std::cout << "the animal has no cry" << std::endl;
    return;
}