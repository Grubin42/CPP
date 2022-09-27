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
    this->_Brain = new Brain(*src._Brain);
    return;
}

//destructor
Cat::~Cat(void) {

    delete this->_Brain;
    std::cout << "Cat destructor up" << std::endl;
    return;
}

//operator overload
Cat&    Cat::operator=(const Cat& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    Animal::operator=(rhs);
    if (this != &rhs)
    {
        if (this->_Brain)
            delete (this->_Brain);
        this->_Brain = new Brain(*rhs._Brain);
    }
    return (*this);
}

//accessor
std::string Cat::getIdeas(int index)
{
    return (this->_Brain->getIdea(index));
}

//setor
void Cat::setBrain(std::string &src, int index)
{
    this->_Brain->setIdea(src, index);
}

//member function    
void Cat::makeSound(void) const {

    std::cout << "Miaou" << std::endl;
    return;
}