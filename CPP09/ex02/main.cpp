#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac > 3)
        PmergeMe(ac, av);
    else
        std::cerr << "ERROR: please input at least 2 numbers" << std::endl;
    return 0;
}