#pragma once

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

// Develop a Span class that can store a maximum of N integers. N is an unsigned int
// variable and will be the only parameter passed to the constructor.
// This class will have a member function called addNumber() to add a single number
// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
// are already N elements stored should throw an exception.
// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
// Of course, you will write your own tests, and they will be far more thorough than the
// ones below. Test your Span with at least 10,000 numbers. More would be even better.

typedef unsigned int UI;

class Span {
    std::vector<int> numbers;
    UI Nelements;
    Span();
public:
    Span(UI N);
    Span(const Span &copy);
    Span& operator=(const Span &copy);
    void addNumber(const int a);
    UI size() const;
    int shortestSpan();
    long longestSpan();
    void addMultipleNumbers(int beg, int end);
};