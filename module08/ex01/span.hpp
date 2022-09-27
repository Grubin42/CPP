#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

class Span
{
private:
    unsigned int _sizeMax;
    unsigned int _currentSize;
    std::vector<int> _container;

public:
    //constructor
    Span(unsigned int sizeMax);
    Span(const Span & span);

    //destructor
    ~Span();

    //operator
    Span & operator=(const Span & span);

    //function membre
    void addNumberWhile(Span& span);
    void addNumber(const int nbr);
    int shortestSpan(void);
    int longestSpan(void);

    class InvalidSizeException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class InvalidSizeTabException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#endif