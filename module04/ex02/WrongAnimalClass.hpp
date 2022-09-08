#ifndef WRONGANIMALCLASS_H
# define WRONGANIMALCLASS_H
#include <iostream>
#include <string>

class WrongAnimal {

public:

    //constructor
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const & src);

    //destructor
    virtual ~WrongAnimal(void);

    //operator overload
    WrongAnimal & operator=(WrongAnimal const & rhs);

    //accessor
    std::string getType(void) const;

    //setor
    void setType(std::string new_type);

    //member function    
    void makeSound(void) const;


protected:

    std::string p_type;

};

#endif