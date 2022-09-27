#include "span.hpp"

int main()
{
    Span sp = Span(2000);

    sp.addNumberWhile(sp);
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    return 0;
}