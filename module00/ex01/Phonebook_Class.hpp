#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact_Class.hpp"

class Phonebook {

public:

    Contact contact[8];

    Phonebook(void);
    ~Phonebook(void);

};

#endif