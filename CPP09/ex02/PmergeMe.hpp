#pragma once

#include "helpers.hpp"


std::deque<size_t> generateJacobsthal(size_t n);

template <typename Container>
void mergeInsertionSortImpl(Container& container)
{
    typedef typename Container::value_type ValueType;

    size_t n = container.size();

    if (n < 2)
        return;

    bool hasStraggler = (n % 2 != 0);
    ValueType straggler;
    if (hasStraggler)
    {
        straggler = container.back();
        container.pop_back();
    }

    std::deque<std::pair<ValueType, ValueType> > pairs;
    Container winners;

    typename Container::iterator it = container.begin();
    while (it != container.end())
    {
        ValueType a = *it;
        ValueType b = *(it + 1);
        
        if (a < b)
            std::swap(a, b);
        counter++;
            
        pairs.push_back(std::make_pair(a, b));
        winners.push_back(a);
        
        it += 2;
    }

    mergeInsertionSortImpl(winners);

    Container mainChain;
    std::deque<ValueType> pending;

    for (size_t i = 0; i < pairs.size(); ++i)
    {
        if (pairs[i].first == winners[0])
        {
            mainChain.push_back(pairs[i].second);
            break;
        }
    }
    mainChain.push_back(winners[0]);

    for (size_t i = 1; i < winners.size(); ++i)
    {
        mainChain.push_back(winners[i]);
        for (size_t j = 0; j < pairs.size(); ++j)
        {
            if (pairs[j].first == winners[i])
            {
                pending.push_back(pairs[j].second);
                break;
            }
        }
    }

    std::deque<size_t> jacobsthal = generateJacobsthal(pending.size());
    
    size_t pendingIdx = 0;
    size_t jacobsthalIdx = 0;

    while (pendingIdx < pending.size())
    {
        size_t limit = jacobsthal[jacobsthalIdx];
        if (limit > pending.size()) 
            limit = pending.size();

        for (size_t i = limit; i > pendingIdx; --i)
        {
            ValueType valToInsert = pending[i - 1];
            
            ValueType buddyWinner;
            bool foundBuddy = false;
            
            for(size_t p = 0; p < pairs.size(); ++p) 
            {
                if(pairs[p].second == valToInsert) 
                {
                    buddyWinner = pairs[p].first;
                    foundBuddy = true;
                    break;
                }
            }

            typename Container::iterator searchEnd = mainChain.end();
            if (foundBuddy) 
            {
                for(typename Container::iterator it2 = mainChain.begin(); it2 != mainChain.end(); ++it2)
                {
                    if(*it2 == buddyWinner) 
                    {
                        searchEnd = it2;
                        break;
                    }
                }
            }

            typename Container::iterator insertPos = binarySearch(mainChain.begin(), searchEnd, valToInsert);
            mainChain.insert(insertPos, valToInsert);
        }
        
        pendingIdx = limit;
        jacobsthalIdx++;
    }

    if (hasStraggler)
    {
        typename Container::iterator insertPos = binarySearch(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(insertPos, straggler);
    }

    container = mainChain;
}

template <typename T>
void sortsFordJohnson(T& container)
{
    mergeInsertionSortImpl(container);
}

class PmergeMe{

        std::deque<int> deq;
        std::vector<int> vector;
        
        void application();
        public:
        static int comparisons;
        PmergeMe();
        PmergeMe(std::deque<int> &deq, std::vector<int> &vector_);
        PmergeMe(PmergeMe &copy);
        PmergeMe &operator=(PmergeMe &copy);
        ~PmergeMe();
};