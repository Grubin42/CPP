#include "DogClass.hpp"

//constructor
Dog::Dog(void) {

    this->_Brain = new Brain();
    this->p_type = "Dog";
    std::cout << "Dog constructor up" << std::endl;
    return; 
}

Dog::Dog(Dog const & src) {

    std::cout << "Dog copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor
Dog::~Dog(void) {

    delete _Brain;
    std::cout << "Dog destructor up" << std::endl;
    return;
}

//operator overload
Dog & Dog::operator=(Dog const & rhs) {

    if (this != &rhs) {
        this->p_type = rhs.p_type;
    }
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return(*this);
}

//member function    
void Dog::makeSound(void) const {

    std::cout << "Wouf" << std::endl;
    return;
}