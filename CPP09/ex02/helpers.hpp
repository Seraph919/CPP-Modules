#pragma once

#include <sys/time.h>
#include <iostream>
#include <deque>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iostream>
#include <stdexcept>

extern int counter;

int isPositiveNumbers(char *str);
double getTimeUs();
void storeInput(char *av, std::deque<int> &deq, std::vector<int> &vector);
std::deque<std::string> splitString(const std::string& str, const std::string& delimiter);

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
        counter += 1;
    }
    return left;
}
