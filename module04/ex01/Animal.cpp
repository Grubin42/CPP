#include "AnimalClass.hpp"

//constructor
Animal::Animal(void) {

    std::cout << "Animal constructor up" << std::endl;
    return; 
}

Animal::Animal(Animal const & src) {

    std::cout << "Animal copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor
Animal::~Animal(void) {

    std::cout << "Animal destructor up" << std::endl;
    return;
}

//operator overload
Animal & Animal::operator=(Animal const & rhs) {

    if (this != &rhs) {
        this->p_type = rhs.p_type;
    }
    std::cout << "Animal Copy assignment operator called" << std::endl;
    return(*this);
}

//accessor
std::string Animal::getType(void) const {

    return (this->p_type);
}

//setor
void Animal::setType(std::string new_type) {

    this->p_type = new_type;
}

//member function    
void Animal::makeSound(void) const {


}