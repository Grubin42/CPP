#include "WrongCatClass.hpp"

//constructor
WrongCat::WrongCat(void) {

    this->p_type = "WrongCat";
    std::cout << "WrongCat constructor up" << std::endl;
    return; 
}

WrongCat::WrongCat(WrongCat const & src) {

    std::cout << "WrongCat copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor
WrongCat::~WrongCat(void) {

    std::cout << "WrongCat destructor up" << std::endl;
    return;
}

//operator overload
WrongCat & WrongCat::operator=(WrongCat const & rhs) {

    if (this != &rhs) {
        this->p_type = rhs.p_type;
    }
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    return(*this);
}

//member function    
void WrongCat::makeSound(void) const {

    std::cout << "Graouuuu" << std::endl;
    return;
}