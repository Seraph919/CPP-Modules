#include "Span.hpp"

Span::Span(){}
Span::Span(UI N) : Nelements(N){}
UI Span::size() const
{
    return this->Nelements;
}
Span::Span(const Span &copy){ *this = copy; }

Span& Span::operator=(const Span &copy){
    if (this != &copy)
    {
        Nelements = copy.size();
        for (UI i = 0; i < Nelements; i++)
        {
            numbers[i] = copy.numbers[i];
        }
    }
    return *this;
}

void Span::addNumber(const int a){
    static UI soFar = 0;
    if (soFar < Nelements)
        numbers.push_back(a);
    else
        throw std::range_error("there are already N elements stored");
    ++soFar;
}

long Span::longestSpan(){
    if (Nelements <= 1)
        throw std::length_error("Not enough Numbers to find longestSpan");
    std::vector<int> newVect = numbers;
    std::sort(newVect.begin(), newVect.end());
    // for (std::vector<int>::iterator it = newVect.begin(); it < newVect.end(); it++)
    //     std::cout << *it << "\n";
    return *(newVect.end() - 1) - *newVect.begin(); 
}


int Span::shortestSpan(){
    if (Nelements <= 1)
        throw std::length_error("Not enough Numbers to find shortestSpan");
    int temp = 0;
    std::vector<int> newVect = numbers;
    std::sort(newVect.begin(), newVect.end());
    temp = newVect[1] - newVect[0];
    for (UI i = numbers.size() - 1; i > 0; i--)
    {
        if ( i > 0 && newVect[i] - newVect[i - 1] < temp)
        {
            temp = newVect[i] - (newVect[i - 1]);
        }
    }
    return temp;
}


// int Span::shortestSpan(){
//     if (Nelements <= 1)
//         throw std::length_error("Not enough Numbers to find shortestSpan\n");
//     int temp = 0;
//     std::vector<int> newVect = numbers;
//     std::sort(newVect.begin(), newVect.end());
//     if (*newVect.begin() > *(newVect.begin() + 1))
//         temp = *newVect.begin() - *(newVect.begin() + 1);
//     else
//         temp = *(newVect.begin() + 1) - *newVect.begin();
//     for (std::vector<int>::iterator i = newVect.begin(); i < newVect.end(); i++)
//     {
//         for (std::vector<int>::iterator j = newVect.begin(); j < newVect.end(); j++)
//         {
//             if ( *i > *j && temp > *i - *j)
//                 temp = *i - *j;
//             if ( *j > *i && temp > *j - *i)
//                 temp = *j - *i;
//         }
//     }
//     return temp;
// }

void Span::addMultipleNumbers(int beg, int end)
{
    bool neg = true;
    int count = end - beg;
    if (beg > end)
    {
        count = beg - end, neg = false;
    }
    if (count > static_cast<int>(Nelements))
        throw std::length_error("the given range is more than the inputed Elements Number");
    std::vector<int>::iterator it ;
    for (int i = 0; i < count; i++)
    {   
        if (neg)
            addNumber(beg++);
        else
            addNumber(beg--);
    }
}
