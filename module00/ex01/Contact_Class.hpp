#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contact {

public:

    int index;

    Contact(void);
    ~Contact(void);
    void putdata(int i);
    void getData(void);
    void getOneData(void);

private:

    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_nb;
    std::string _darkest_secret;
    void _resizedata(std::string *str, std::string comment);
};
#endif