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
    std::string getIdea(int i);

    //setor
    void setIdea(std::string const &idea, int i);

    //member function    

    //attributs membre

private:

    std::string _ideas[100];

};

#endif