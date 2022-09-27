#include "AMateriaClass.hpp"
#include "CharactereClass.hpp"
#include "MateriaSourceClass.hpp"
#include "IceClass.hpp"
#include "CureClass.hpp"

#include <iostream>

int main()
{
    std::cout << "----------------------- MATERIAL SOURCES ------------" << std::endl;
    {
        MateriaSource    *src(new MateriaSource);
        MateriaSource    *src2(new MateriaSource);
        AMateria        *tmp;


        // Try to create an unknown materia:
        tmp = src->createMateria("ice");
        if (!tmp)
            std::cout << "Material is null as expected" << std::endl;

        // Try to create a known materia:
        {
            Ice    ice; // Baby

            src->learnMateria(&ice);
            tmp = src->createMateria("ice");
            if (tmp && tmp->getType() == "ice")
                std::cout << "Tmp is now ice !" << std::endl;
            delete tmp;
        }

        // Deep copying a MateriaSource
        *src2 = *src;
        delete src;

        // Try to learn more materia than possible
        {
            Cure cure;

            src2->learnMateria(&cure);
            src2->learnMateria(&cure);
            src2->learnMateria(&cure);
            src2->learnMateria(&cure);
            tmp = src2->createMateria("ice");
            if (tmp && tmp->getType() == "ice")
                std::cout << "The source didn't forget about the ice" << std::endl;
            delete tmp;
        }

        delete src2;
    }

    std::cout << "----------------------- CHARACTERS ------------" << std::endl;
    {
        // Initialize a character with Ice
        Charactere *bob = new Charactere("bob");
        AMateria *mat = new Ice();
        bob->equip(mat);

        // Creating a second character with Cure
        Charactere bob2;
        bob2.equip(new Cure());

        // Deep copying the first character into the second
        // The Cure should be deleted and replaced by ice (no memory leak)
        bob2 = *bob;

        // Unequip some material
        bob->unequip(0);
        bob->use(0, bob2);
        delete mat;

        // Deleting first bob
        delete bob;

        // Shows that the second bob has some Ice
        Charactere charles("Charles");
        bob2.use(0, charles);
    }

    std::cout << "----------------------- EXAMPLE ---------------" << std::endl;
    IMateriaSource *src = new MateriaSource();
    AMateria* tmp = new Ice();
    src->learnMateria(tmp);
    delete tmp;
    tmp = new Cure();
    src->learnMateria(tmp);
    delete tmp;

    ICharactere * me = new Charactere("me");
    ICharactere * bob = new Charactere("my evaluator");

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
    std::cout << "----------------------- END ------------" << std::endl;
    return 0;
}