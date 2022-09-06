#ifndef DOGCLASS_H
# define DOGCLASS_H
#include <iostream>
#include <string>
#include "AnimalClass.hpp"

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


    //setor


    //member function    
    void makeSound(void) const;

};

#endif