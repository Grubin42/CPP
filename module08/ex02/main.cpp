#include "MutantStack.hpp"

int main()
{
    std::cout << "--------MUTANT STACK-----------" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it;
    it = mstack.begin();
    MutantStack<int>::iterator ite;
    ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << '\n';
        ++it;
    }
    std::cout << std::endl;
    std::stack<int> s(mstack);


    std::cout << "----------COMPARE_LIST-----------" << std::endl;
    std::list<int> list;
    list.push_front(5);
    list.push_front(17);
    std::cout << list.front() << std::endl;
    list.pop_front();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
            std::cout << *it << '\n';
    std::cout << std::endl;
    std::list<int> copiedList(list);
    return 0;
}