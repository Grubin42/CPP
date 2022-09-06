#include "BrainClass.hpp"

//constructor
Brain::Brain(void) {

    std::cout << "Brain constructor up" << std::endl;
    return; 
}

Brain::Brain(Brain const & src) {

    std::cout << "Brain copy constructor up" << std::endl;
    *this = src;
    return;
}

//destructor
Brain::~Brain(void) {

    std::cout << "Brain destructor up" << std::endl;
    return;
}

//operator overload
Brain & Brain::operator=(Brain const & rhs) {

    if (this != &rhs) {
        for (size_t i = 0; i < ideas->size(); i++)
            this->ideas[i] = rhs.ideas[i];
    }
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return(*this);
}

//accessor

//setor

//member function    
