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
    this->_Brain = new Brain(*src._Brain);
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

    std::cout << "Copy assignment operator called" << std::endl;
    Animal::operator=(rhs);
    if (this->_Brain)
        delete (this->_Brain);
    if (this != &rhs)
        this->_Brain = new Brain(*rhs._Brain);
    return (*this);
}

//accessor
std::string Dog::getIdeas(int index)
{
    return (this->_Brain->getIdea(index));
}

//setor
void Dog::setBrain(std::string &src, int index)
{
    this->_Brain->setIdea(src, index);
}

//member function    
void Dog::makeSound(void) const {

    std::cout << "Wouf" << std::endl;
    return;
}