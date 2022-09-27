#include "easyfind.hpp"

int main () {

    std::vector<int> container;
    std::vector<int>::iterator value;

    container.push_back(1);
    container.push_back(2);
    container.push_back(3);
    container.push_back(4);
    container.push_back(5);
    container.push_back(6);
    value = easyfind(container, 4);
    if (value == container.end())
        std::cout << "Value not found " << std::endl;
    else
        std::cout << "Value is " << *value << std::endl;
    return 0;
}