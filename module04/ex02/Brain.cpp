#include "BrainClass.hpp"

//constructor
Brain::Brain(void) {

    for (size_t i = 0; i < _ideas->size(); i++)
        this->_ideas[i] = "Biiiiiiiiiiiiiiiiiiip";
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
        for (size_t i = 0; i < _ideas->size(); i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return(*this);
}

//accessor
std::string Brain::getIdea(int i)
{
    if (i < 0 || i >= 100)
        return "";
    return _ideas[i];
}

//setor
void Brain::setIdea(const std::string &idea, int i)
{
    if (i < 0 || i >= 100)
        return ;
    this->_ideas[i] = idea;
}

//member function    
