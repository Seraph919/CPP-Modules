#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

std::deque<size_t> generateJacobsthal(size_t n)
{
    std::deque<size_t> jacobsthal;
    jacobsthal.push_back(1);
    jacobsthal.push_back(3);

    while (jacobsthal.back() < n)
    {
        size_t next = jacobsthal.back() + 2 * jacobsthal[jacobsthal.size() - 2];
        jacobsthal.push_back(next);
    }
    return jacobsthal;
}

std::deque<std::string> splitString(const std::string& str, const std::string& delimiter) {
    std::deque<std::string> tokens;
    size_t prev = 0;
    size_t current = str.find(delimiter);
    while (current != std::string::npos) {
        std::string token = str.substr(prev, current - prev);
        if (!token.empty())
        {
            tokens.push_back(token);
        }
        prev = current + delimiter.length();
        current = str.find(delimiter, prev);
    }
    std::string token = str.substr(prev, std::string::npos);
    if (!token.empty())
        tokens.push_back(token);
    return tokens;
}

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
    
    double start = getTimeUs();
    sortsFordJohnson(deq);
    double end = getTimeUs();

    // double start2 = getTimeUs();
    // sortsFordJohnson(list);
    // double end2 = getTimeUs();
    
    std::cout << "after: ";
    for (size_t i = 0; i < deq.size(); i++)
    {
        std::cout << deq[i];
        if (i < deq.size() - 1)
        std::cout << ' ';
    }
    std::cout << '\n';
    std::cout << "Time to process a range of "
            << deq.size()
            << " elements with std::deque : "
            << (end - start)
            << " us"
            << std::endl;
    // std::cout << "Time to process a range of "
    //         << list.size()
    //         << " elements with std::list : "
    //         << (end2 - start2)
    //         << " us"
    //         << std::endl;
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
    std::string str(av);
    std::deque<std::string> numbers =  splitString(str, " ");
    for (size_t i = 0; i < numbers.size(); i++)
    {
        int n;
        std::stringstream sstr(numbers[i]);
        sstr >> n; 
        deq.push_back(n);
        list.push_back(n);
    }
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



