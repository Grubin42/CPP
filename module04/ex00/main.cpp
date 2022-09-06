#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "WrongAnimalClass.hpp"
#include "WrongCatClass.hpp"

int main() {

    //const Animal* meta = new Animal();
    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    //const Animal* i = new Cat();
    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();

    delete meta;
    delete j;
    delete i;
    return 0;
}