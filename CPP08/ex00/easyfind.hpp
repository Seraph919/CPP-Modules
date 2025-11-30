#pragma once 

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>


// typename    T::iterator easyfind(T &container, int value)
// {
//     typename    T::iterator it = std::find(container.begin(), container.end(), value);
//     if (it == container.end())
//         throw std::logic_error("Value not found in container");
    
//     return (it);
// }

template <typename T>
typename T::iterator easyfind(T &con, const int n)
{
    // find why typename perior T
    typename T::iterator i = std::find(con.begin(), con.end(), n);
    // find if the end is a pointer to the final element or what, cause its problematic if it is
    if (i == con.end())
        throw(std::runtime_error("Cannot find n\n"));
    return i;
}