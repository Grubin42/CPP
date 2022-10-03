#include "span.hpp"

Span::Span(unsigned int size): _sizeMax(size)
{
    this->_currentSize = 0;
}

Span::Span(const Span & span)
{
    *this = span;
}

Span & Span::operator=(const Span & span)
{
    if (this != &span)
    {
        this->_sizeMax = span._sizeMax;
        this->_currentSize = span._currentSize;
    }
    return *this;

}

Span::~Span()
{

}

void Span::addNumber(const int nbr)
{
    this->_currentSize++;
    try
    {
        if (this->_currentSize > this->_sizeMax)
            throw Span::InvalidSizeException();
        else
            this->_container.push_back(nbr);
        std::sort(this->_container.begin(), this->_container.end());
    }
    catch(const Span::InvalidSizeException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

int  Span::shortestSpan()
{
    try
    {
        if (this->_sizeMax <= 1 )
            throw Span::InvalidSizeTabException();
        else
        {
            int tmp = this->_container[1] - this->_container[0];
            for (unsigned int i = 0; i < this->_sizeMax - 1; i++)
            {
                int tmp1 = this->_container[i + 1] - this->_container[i];
                if (tmp >= tmp1)
                    tmp = tmp1;
                else
                    i++;
            }
            return (tmp);
        }
    }
    catch(const Span::InvalidSizeTabException& e)
    {
        std::cerr << e.what() << '\n';
        exit (0);
    }
    exit (0);
}

void Span::addNumberWhile(Span& span)
{
    srand(time(NULL));
    for(unsigned int i = 0; i < this->_sizeMax; i++)
    {
        span.addNumber(rand());
    }
}

int Span::longestSpan(void)
{
    try
    {
        if (this->_sizeMax < 2)
            throw Span::InvalidSizeTabException();
        else
            return this->_container.back() - this->_container.front();
    }
    catch(const Span::InvalidSizeTabException& e)
    {
        std::cerr << e.what() << '\n';
        exit(0);
    }
    exit(0);
}

const char* Span::InvalidSizeException::what() const throw()
{
    return ("Exception: Array is full");
}

const char* Span::InvalidSizeTabException::what() const throw()
{
    return ("Exception: It is not possible to sort a table having at least 2 entries");
}