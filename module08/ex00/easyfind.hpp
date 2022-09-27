#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

template<typename T>
typename T::iterator easyfind (T & container, const int value) {

    typename T::iterator it;
    it = std::find(container.begin(), container.end(), value);
    return (it);

}

#endif