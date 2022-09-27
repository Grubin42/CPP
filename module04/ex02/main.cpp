#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "WrongAnimalClass.hpp"
#include "WrongCatClass.hpp"
#include "BrainClass.hpp"

int main()
{
    //const AAnimal meta = AAnimal();
    const Dog j = Dog();
    const Cat i = Cat();

    std::cout << j.getType() << " " << std::endl;
    std::cout << i.getType() << " " << std::endl;

    i.makeSound();
    j.makeSound();
    //meta.makeSound();
    return 0;
}