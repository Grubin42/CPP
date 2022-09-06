#ifndef CATCLASS_H
# define CATCLASS_H
#include <iostream>
#include <string>
#include "AnimalClass.hpp"

class Cat : public Animal {

public:

    //constructor
    Cat(void);
    Cat(Cat const & src);

    //destructor
    ~Cat(void);

    //operator overload
    Cat & operator=(Cat const & rhs);

    //accessor


    //setor


    //member function    
    void makeSound(void) const;

};

#endif