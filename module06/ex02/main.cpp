#include <iostream>
#include <cstdlib>
#include <time.h>

class Base              {public: virtual ~Base(void) {}};
class A: public Base    {};
class B: public Base    {};
class C: public Base    {};

Base * generate(void) {

    std::srand(time(0));
    int value = std::rand() %3 +1;
    std::cout << "value = " << value << std::endl;
    switch (value) {

        case 1:
            return new A;
            break;
        case 2:
            return new B;
            break;
        case 3:
            return new C;
            break;
        default:
            break;
    }
    return(0);
}

void identify(Base* p) {

    A * a = dynamic_cast<A *>(p);
    B * b = dynamic_cast<B *>(p);
    C * c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "this type is A" << std::endl;
    else if (b)
        std::cout << "this type is B" << std::endl;
    else if (c)
        std::cout << "this type is C" << std::endl;
    else
        std::cout << "conversion is not ok" << std::endl;
}

void identify(Base& p) {

    std::cout << "this type is ";
    try
    {
        A & a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception &e) {}

    try
    {
        B & b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch(std::exception &e) {}

    try
    {
        C & c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch(std::exception &e){}

    std::cout  << "conversion is not ok" << std::endl;
}


int main() {

    Base* oulala = generate();
    identify(oulala);
    identify(*oulala);
    delete oulala;
    return 0;
}