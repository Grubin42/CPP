#ifndef CATCLASS_H
# define CATCLASS_H
#include <iostream>
#include <string>
#include "AnimalClass.hpp"
#include "BrainClass.hpp"

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
    std::string getIdeas(int index);

    //setor
    void setBrain(std::string &src, int index);

    //member function    
    void makeSound(void) const;

private:
    
    Brain* _Brain;

};

#endif