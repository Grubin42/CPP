#include "CatClass.hpp"

//constructor
Cat::Cat(void) {

    this->_Brain = new Brain();
    this->p_type = "Cat";
    std::cout << "Cat constructor up" << std::endl;
    return; 
}

Cat::Cat(Cat const & src) {

    std::cout << "Cat copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor
Cat::~Cat(void) {

    delete _Brain;
    std::cout << "Cat destructor up" << std::endl;
    return;
}

//operator overload
Cat & Cat::operator=(Cat const & rhs) {

    if (this != &rhs) {
        this->p_type = rhs.p_type;
    }
    std::cout << "Cat Copy assignment operator called" << std::endl;
    return(*this);
}

//accessor
std::string Cat::getIdeas(int index) {

    return(this->_Brain->ideas[index]);
}

//setor
void Cat::setIdeas(std::string idea, int index) {

    this->_Brain->ideas[index] = idea;
}

//member function    
void Cat::makeSound(void) const {

    std::cout << "Miaou" << std::endl;
    return;
}