#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac > 3)
    {
        try
        {
            std::deque<int> deq;
            std::vector<int> vector;
            for (int i = 1; i < ac; i++)
            {
                if (isPositiveNumbers(av[i]) == 0)
                    throw std::runtime_error("ERROR: Bad input");
                storeInput(av[i], deq, vector);
            }
            PmergeMe(deq, vector);
        } catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        return std::cerr << "ERROR: please input at least 2 numbers" << std::endl, 1;
    return 0;
}