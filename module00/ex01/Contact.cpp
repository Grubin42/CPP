#include "Contact_Class.hpp"

Contact::Contact(void) {

    std::cout << "contact constructor called" << std::endl;
    return;
}

Contact::~Contact(void) {

    std::cout << "contact destructor called" << std::endl;
    return;
}

void Contact::_resizedata(std::string *str, std::string comment){

    if (str->length() > 10)
    {
        str->resize(9);
        str->push_back('.');
    }
    while (str->empty())
    {
        std::cout << comment;
        std::getline (std::cin, *str);
    }
}

void Contact::putdata(int i) {

    index = i;
    std::cout << "Please enter your personal data" << std::endl;
    std::cout << "First name: ";
    std::getline (std::cin, this->_first_name);
    _resizedata(&_first_name, "First name: ");
    std::cout << "Last name: ";
    std::getline (std::cin, this->_last_name);
    _resizedata(&_last_name, "Last name: ");
    std::cout << "Nickname: ";
    std::getline (std::cin, this->_nickname);
    _resizedata(&_nickname, "Nickname: ");
    std::cout << "Phone number: ";
    std::getline (std::cin, this->_phone_nb);
    while (this->_phone_nb.empty() || this->_phone_nb.length() > 10)
    {
        std::cout << "The phone number is not correct: ";
        std::getline (std::cin, this->_phone_nb);
    }
    std::cout << "Darkest secret: ";
    std::getline (std::cin, this->_darkest_secret);
    while (this->_darkest_secret.empty())
    {
        std::cout << "Darkest secret: ";
        std::getline (std::cin, this->_darkest_secret);
    }
}

void Contact::getOneData(void) {

    std::cout << std::setfill (' ') << std::setw (10) << this->_first_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_last_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_nickname << '|'; 
    std::cout << std::setfill (' ') << std::setw (10) << this->_phone_nb << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_darkest_secret << std::endl;
}

void Contact::getData(void) {

    std::cout << std::setfill (' ') << std::setw (10) << this->index << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_first_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_last_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_nickname << std::endl;
}
