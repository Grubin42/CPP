#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template<typename T>
class Array {

    private:
        unsigned int _size;
        T * _tab;

    public:
        //constructor
        Array<T>() {
            
            this->_tab = new T[0];
        };

        Array<T>(unsigned int n): _size(n), _tab(NULL) {
            
            if (_size) {

                this->_tab = new T[n];
            }
        };

        Array<T>(const Array & src): _tab(NULL) {

            *this = src;
        };

        //destructor
        ~Array() {

            if (_size)
                delete[] this->_tab;
        };

        //operator
        Array<T> & operator=(const Array & src) {

            if (this != &src) {

                if (this->_tab)
                    delete[] this->_tab;
                this->_size = src._size;
                this->_tab = new T[src._size];
                for (int i = 0; i < size() - 1; i++)
                    this->_tab[i] = src._tab[i];
            }
            return *this;
        };

        T & operator[](unsigned int index) {

            if (index >= _size)
                throw InvalidSizeException();
            return _tab[index];
        };

        //function membre
        T size(void) {

            return (this->_size);
        };

        class InvalidSizeException : public std::exception {

            public:
                virtual const char* what() const throw() {

                    return ("Index invalid");
                }
        };
};

#endif