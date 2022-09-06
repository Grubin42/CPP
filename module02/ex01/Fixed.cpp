#include "FixedClass.hpp"

Fixed::Fixed(void) {

    std::cout << "constructor up" << std::endl;
    this->_raw = 0;
    return;
}

Fixed::Fixed(int const raw): _raw(raw) {

    std::cout << "int constructor up" << std::endl;
    this->_raw = raw << _bits;
    return;
}

Fixed::Fixed(float const raw): _raw(raw) {

    std::cout << "float constructor up" << std::endl;
    setRawBits(std::roundf(raw * ft_pow(2)));
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

    //std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
}

int Fixed::getRawBits(void) const {
    
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_raw);
}

float Fixed::toFloat(void) const {

    return ((float)(this->_raw) /(ft_pow(2)));
}

int Fixed::toInt(void) const {

    return (_raw >> _bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

    o << rhs.toFloat();
    return(o);
}

int Fixed::ft_pow(const int nbr) {
    
    int ret;
    int pow;

    pow = _bits;
    ret = nbr;
    while(pow - 1)
    {
        ret *= nbr;
        pow--;
    }
    return ret;
}