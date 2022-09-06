#include "FixedClass.hpp"

bool Fixed::operator < (const Fixed& rhs) const {

    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator > (const Fixed& rhs) const {

    return (this->toFloat() > rhs.toFloat());  
}

bool Fixed::operator <= (const Fixed& rhs) const {

    return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator >= (const Fixed& rhs) const {

    return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator != (const Fixed& rhs) const {

    return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator == (const Fixed& rhs) const {

    return (this->toFloat() == rhs.toFloat());
}

Fixed Fixed::operator + (const Fixed& rhs) const {

    return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator - (const Fixed& rhs) const {

    return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator / (const Fixed& rhs) const {

    return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator * (const Fixed& rhs) const {

    return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator ++ () {

    ++this->_raw;
    return (*this);
}

Fixed Fixed::operator ++ (int) {

    Fixed tmp;

    tmp._raw = this->_raw++;
    return (tmp);
}

Fixed Fixed::operator -- () {

    --this->_raw;
    return (*this);
}

Fixed Fixed::operator -- (int) {

    Fixed tmp;

    tmp._raw = this->_raw--;
    return (tmp);
}