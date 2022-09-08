#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "WrongAnimalClass.hpp"
#include "WrongCatClass.hpp"
#include "BrainClass.hpp"

int main()
{
    const Animal* j[100];
    
    for(size_t i = 0; i < 100; i++)
    {
        if (i < 50)
            j[i] = new Dog();
        else
            j[i] = new Cat();
    }
    j[11]->makeSound();
    j[51]->makeSound();
    for(size_t i = 0; i < 100; i++)
    {
        if (j[i])
            delete j[i];
    }
    return 0;
}