#include "Span.hpp"


int main()
{
    try{
    Span sp = Span(100);
    sp.addMultipleNumbers(-22, 33);
    // sp.addNumber(11);
    // sp.addNumber(2);
    // sp.addNumber(12);
    // sp.addNumber(441);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}