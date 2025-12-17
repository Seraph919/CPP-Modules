#include "helpers.hpp"

int isPositiveNumbers(char *str)
{
    int i = 0;
    if (str[0] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
        {
            std::cout << "error caused by [" << str[i] << "]\n";
            return 0;
        }
        i++;
    }
    return 1;
}
