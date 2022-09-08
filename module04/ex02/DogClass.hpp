#ifndef DOGCLASS_H
# define DOGCLASS_H
#include <iostream>
#include <string>
#include "AnimalClass.hpp"
#include "BrainClass.hpp"

class Dog : public Animal {

public:

    //constructor
    Dog(void);
    Dog(Dog const & src);

    //destructor
    ~Dog(void);

    //operator overload
    Dog & operator=(Dog const & rhs);

    //accessor
    std::string getIdeas(int index);

    //setor
    void setBrain(std::string &src, int index);
    
    //member function    
    void makeSound(void) const;

private:
    
    Brain* _Brain;

};

#endif