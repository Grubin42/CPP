#ifndef WRONGCATCLASS_H
# define WRONGCATCLASS_H
#include <iostream>
#include <string>
#include "WrongAnimalClass.hpp"

class WrongCat : public WrongAnimal {

public:

    //constructor
    WrongCat(void);
    WrongCat(WrongCat const & src);

    //destructor
    ~WrongCat(void);

    //operator overload
    WrongCat & operator=(WrongCat const & rhs);

    //accessor


    //setor


    //member function    
    void makeSound(void) const;

};

#endif