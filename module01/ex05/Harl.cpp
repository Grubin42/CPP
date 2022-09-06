#include "HarlClass.hpp"

Harl::Harl(void) {

    std::cout << "Harl is born" << std::endl;
    return;
}

Harl::~Harl(void) {

    std::cout << "Harl is dead" << std::endl;
    return;
}

void Harl::complain(std::string level) {

    std::string tab_level[4] = {"DEBUG", "INFO", "WARNING","ERROR"};
    my_function fun[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    for(size_t i = 0; i < tab_level->size(); i++) {
    
        if (level == tab_level[i])
            ((this->*fun[i])());
    }
}

void Harl::_debug(void)
{
    std::cout << "[DEBUG]\n"; 
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}