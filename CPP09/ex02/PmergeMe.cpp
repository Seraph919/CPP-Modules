#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

void PmergeMe::application()
{
    std::cout << "before: ";
    for (size_t i = 0; i < deq.size(); i++)
    {
        std::cout << deq[i];
        if (i < deq.size() - 1)
            std::cout << ' ';
    }
    std::cout << '\n';
    std::cout << "after: ";
    for (size_t i = 0; i < deq.size(); i++)
    {
        std::cout << deq[i];
        if (i < deq.size() - 1)
            std::cout << ' ';
    }
    std::cout << '\n';
}

PmergeMe::PmergeMe(int ac, char **av){
    try{
        processInput(ac, av + 1);
        application();
    }catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void PmergeMe::storeInput(char *av)
{
    std::stringstream str(av);
    int n;
    str >> n;
    deq.push_back(n);
    list.push_back(n);
}
void PmergeMe::processInput(int ac, char **av)
{
    for (int i = 0; i < ac - 1; i++)
    {
        if (isPositiveNumbers(av[i]) == 0)
            throw inputError();
        storeInput(av[i]);
    }
}

PmergeMe::PmergeMe(PmergeMe &copy){
    *this = copy;
}
PmergeMe &PmergeMe::operator=(PmergeMe &copy){
    if (this != &copy)
    {
        this->deq = copy.deq;
        this->list = copy.list;
    }
    return *this;
}
PmergeMe::~PmergeMe(){}


    