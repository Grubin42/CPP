#include "FixedClass.hpp"

Fixed::Fixed(void) {

    std::cout << "constructor up" << std::endl;
    this->_raw = 0;
    return;
}

Fixed::Fixed(Fixed const & src) {
   
    std::cout << "copy constructor up" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(void) {

    std::cout << "destructor up" << std::endl;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {

        this->_raw = rhs.getRawBits();
    }
    return(*this);
}

void Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
}

int Fixed::getRawBits(void) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_raw);
}