#ifndef ANIMALCLASS_H
# define ANIMALCLASS_H
#include <iostream>
#include <string>

class Animal {

public:

    //constructor
    Animal(void);
    Animal(Animal const & src);

    //destructor
    virtual ~Animal(void);

    //operator overload
    Animal & operator=(Animal const & rhs);

    //accessor
    std::string getType(void) const;
    
    //setor
    void setType(std::string new_type);

    //member function    
    virtual void makeSound(void) const = 0;


protected:

    std::string p_type;

};

#endif