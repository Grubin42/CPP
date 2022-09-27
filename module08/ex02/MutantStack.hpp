#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <cstdlib>

template<typename T>
class MutantStack : public std::stack<T>
{
    private:
        
        
    public:
        //constructor
        MutantStack();
        MutantStack(const MutantStack & src);

        //destructor
        ~MutantStack();

        //operator
        MutantStack & operator=(const MutantStack & src);

        //iterator

};

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{

};

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & src)
{
    *this = src;
};

template<typename T>
MutantStack<T>::~MutantStack(){};

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> & src)
{
    std::stack<T>::operator=(src);
}

#endif