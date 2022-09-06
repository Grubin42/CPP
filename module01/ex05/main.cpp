#include "HarlClass.hpp"

int main(int ac, char **av) {

    if (ac != 2) {

        std::cout << "Error arguments!" << std::endl;
        return 0;
    }
    Harl harl;
    std::string level = av[1];
    if (level.compare("DEBUG\0") == 0 || level.compare("INFO\0") == 0
        || level.compare("WARNING\0") == 0 || level.compare("ERROR\0") == 0 )
        harl.complain(level);
    else {

        std::cout << "This argument is wrong!" << std::endl;
        return 0;
    }
    return 0;
}