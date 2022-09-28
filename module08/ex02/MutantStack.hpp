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
        MutantStack<T>();
        MutantStack<T>(const MutantStack<T> & src);

        //destructor
        ~MutantStack<T>();

        //operator
        MutantStack<T> & operator=(const MutantStack<T> & src);

        //iterator
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() 
        {
            return this->c.begin();
        }
        iterator end() 
        {
            return this->c.end();
        }

        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() 
        {
            return this->c.rbegin();
        }
        reverse_iterator rend() 
        {
            return this->c.rend();
        }

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const 
        {
            return this->c.begin();
        }
        const_iterator end() const 
        {
            return this->c.end();
        }

        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator rbegin() const 
        {
            return this->c.rbegin();
        }
        const_reverse_iterator rend() const 
        {
            return this->c.rend();
        }

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