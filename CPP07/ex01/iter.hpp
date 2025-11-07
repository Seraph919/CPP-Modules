#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void printer(const T &element)
{
    std::cout << element << std::endl;
}

template <typename T>
void iter(T array[], size_t length, void (*foo)(T &))
{
    for (size_t i = 0; i < length; i++)
        foo(array[i]);
}

template <typename T>
void iter(T array[], size_t length, void (*foo)(const T &))
{
    for (size_t i = 0; i < length; i++)
        foo(array[i]);
}

#endif