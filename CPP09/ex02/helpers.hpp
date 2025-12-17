#pragma once
#include <iostream>

int isPositiveNumbers(char *str);

template <typename It>
void printContainer(It begin, It end)
{
    for (It it = begin; it != end; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename It, typename T>
It binarySearch(It begin, It end, const T& value)
{
    It left = begin;
    It right = end;
    
    while (left < right)
    {
        It mid = left + (right - left) / 2;

        if (*mid < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

