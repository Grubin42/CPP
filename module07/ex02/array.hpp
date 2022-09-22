#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template<typename T>
class Array {

    private:
        T * tab;

    public:
        //constructor
        Array<T>() {
            
            this->tab = NULL;
            this->sizeTab = 0;
        };
        Array<T>(unsigned int n) {
            
            if (n != 0) {
                tab = new T[n];
                for (int i = 0; i < size() - 1; i++) 
                    this->tab[i] = 0;
            }
        };

        Array<T>(const Array & src) {

            *this = src;
        };

        //destructor
        ~Array() {};

        //operator
        Array<T> & operator=(const Array & src) {

            if (tab && this != &src) {

                for (int i = 0; i < size() - 1; i++)
                    this->tab[i] = src.tab[i];
            }
            return *this;
        };

        T & operator[](int index) {

            try
            {
                if (index == 0)
                    return tab[index];
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            } 
            return tab[index];
        };

        //function membre
        T size(void) {

            int count = 0;
            while (tab[count])
            {
                count++;
            }
            return count;
        };
};

#endif