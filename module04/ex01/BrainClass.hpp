#ifndef BRAINCLASS_H
# define BRAINCLASS_H
#include <iostream>
#include <string>

class Brain {

public:

    //constructor
    Brain(void);
    Brain(Brain const & src);

    //destructor
    virtual ~Brain(void);

    //operator overload
    Brain & operator=(Brain const & rhs);

    //accessor
    
    //setor


    //member function    

    //attributs membre
    std::string ideas[100];

};

#endif