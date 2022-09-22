#include "iter.hpp"

int main () {

    const int size = 10;
    int tab[size] = {0,1,2,3,4,5,6,7,8,9};
    std::string tabStr[size] = {
        "coucou",
        "toi",
        "comment",
        "ca",
        "va",
        "?",
        "moi",
        "ca",
        "va",
        "!"
    };
    iter(tab, size, printValue);
    iter(tabStr, size, printValue);
    
    return 0;
}