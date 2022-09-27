#ifndef CHARACTERECLASS_HPP
# define CHARACTERECLASS_HPP
#include "ICharactere.hpp"
#include "AMateriaClass.hpp"

class Charactere: public ICharactere
{
private:
    static const int _size = 4;
    std::string _name;
    AMateria * _tabMateria[_size];
public:
    //constructor
    Charactere(std::string const & type = "unknown");
    Charactere(const Charactere & Charactere);

    //destructor
    ~Charactere();

    //opertor assigment
    Charactere & operator=(const Charactere & rhs);

    //function membre
    std::string const & getName() const;
    void equip(AMateria * m);
    void unequip(int index);
    void use(int index, ICharactere & target);
};

#endif