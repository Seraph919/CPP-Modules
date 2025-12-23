#include "PmergeMe.hpp"

extern int counter;

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

    // double start2 = getTimeUs();
    // sortsFordJohnson(vector);
    // double end2 = getTimeUs();
    
    double start = getTimeUs();
    sortsFordJohnson(deq);
    double end = getTimeUs();
    
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
    //         << vector.size()
    //         << " elements with std::vector : "
    //         << (end2 - start2)
    //         << " us"
    //         << std::endl;
    std::cout << "number of comparisons = " << counter << std::endl;
}

PmergeMe::PmergeMe(std::deque<int> &deq_, std::vector<int> &vector_) {
    deq = deq_;
    vector = vector_;
    application();
}

int PmergeMe::comparisons = 0;


PmergeMe::PmergeMe(PmergeMe &copy){
    *this = copy;
}
PmergeMe &PmergeMe::operator=(PmergeMe &copy){
    if (this != &copy)
    {
        deq = copy.deq;
        vector = copy.vector;
    }
    return *this;
}
PmergeMe::~PmergeMe(){}

