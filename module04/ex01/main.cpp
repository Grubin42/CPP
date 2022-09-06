#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "WrongAnimalClass.hpp"
#include "WrongCatClass.hpp"
#include "BrainClass.hpp"

int main()
{
    const Animal* cage[100];

    for(size_t i = 0; i < 100; i++) {

        if (i < 50)
            cage[i] = new Cat();
        else
            cage[i] = new Dog();
    }
    
    for(size_t i = 0; i < 100; i++)
        delete cage[i];

    return 0;
}