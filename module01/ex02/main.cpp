#include <iostream>
#include <string>

int main() {

    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;

    std::cout << str << "\n" << *str_ptr << "\n" << str_ref << std::endl;
    std::cout << &str << "\n" << str_ptr << "\n" << &str_ref << std::endl;
    return (0);
}