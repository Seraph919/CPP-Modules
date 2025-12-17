#pragma once

#include <deque>
#include <list>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include "helpers.hpp"

std::deque<size_t> generateJacobsthal(size_t n);

template <typename Container>
void mergeInsertionSortImpl(Container& container)
{
    typedef typename Container::value_type ValueType;

    size_t n = container.size();

    // Base Case: 0 or 1 element is already sorted
    if (n < 2) return;

    // 1. Handle Straggler
    // If odd size, remove the last element temporarily
    bool hasStraggler = (n % 2 != 0);
    ValueType straggler;
    if (hasStraggler)
    {
        straggler = container.back();
        container.pop_back();
    }

    // 2. Create Pairs and find Winners/Losers
    // We store pairs to keep the relationship between winner and loser
    std::deque<std::pair<ValueType, ValueType> > pairs;
    Container winners;

    typename Container::iterator it = container.begin();
    while (it != container.end())
    {
        ValueType a = *it;
        ValueType b = *(it + 1);
        
        // Ensure first element of pair is the Winner (larger)
        if (a < b)
            std::swap(a, b);
            
        pairs.push_back(std::make_pair(a, b));
        winners.push_back(a); // Push winner to list for recursion
        
        it += 2;
    }

    // 3. Recursion
    // Recursively sort the winners
    mergeInsertionSortImpl(winners);

    // 4. Create Main Chain and Pending Chain
    // 'winners' is now sorted. We form the Main Chain.
    // The first loser (buddy of the smallest winner) is always smaller than the smallest winner,
    // so it starts the main chain.
    Container mainChain;
    std::deque<ValueType> pending;

    // We must reconstruct relationships because 'winners' order changed
    // Optimization: For complex types, you'd use iterators/pointers. 
    // For ints, we search the pair list.
    
    // Insert the loser corresponding to the smallest winner (winners[0])
    // Find the pair where pair.first == winners[0]
    for (size_t i = 0; i < pairs.size(); ++i)
    {
        if (pairs[i].first == winners[0])
        {
            mainChain.push_back(pairs[i].second); // Push the loser
            break;
        }
    }
    mainChain.push_back(winners[0]); // Push the smallest winner

    // Prepare the rest of the pending elements
    for (size_t i = 1; i < winners.size(); ++i)
    {
        // Push current winner to main chain
        mainChain.push_back(winners[i]);

        // Find the loser corresponding to this winner and store in pending
        for (size_t j = 0; j < pairs.size(); ++j)
        {
            if (pairs[j].first == winners[i])
            {
                pending.push_back(pairs[j].second);
                break;
            }
        }
    }

    // 5. Insert Pending elements using Jacobsthal Numbers
    std::deque<size_t> jacobsthal = generateJacobsthal(pending.size());
    
    // We insert elements in groups defined by Jacobsthal numbers
    // Range of insertion: We insert pending[k] into mainChain.
    // Since pending[k] is associated with winners[k+1] (logic adjusted for 0-index),
    // we only need to binary search up to the position of that winner in mainChain.
    
    size_t pendingIdx = 0;
    size_t jacobsthalIdx = 0;
    
    // We used pending[0] (associated with winners[1]) ... wait.
    // Let's trace carefully:
    // winners: [W1, W2, W3...] (Sorted)
    // pairs: (W1, L1), (W2, L2)...
    // Initial MainChain: [L1, W1, W2, W3...]
    // Pending to insert: [L2, L3, L4...]
    
    // L2 corresponds to W2. W2 is at index 2 in MainChain. So L2 < W2. Search range [0, 2).
    
    // Jacobsthal insertion order for pending: 
    // J=1 -> insert L2 (pending[0])
    // J=3 -> insert L4 (pending[2]), then L3 (pending[1])
    // J=5 -> insert L6... etc.
    
    size_t insertedCount = 0;

    while (insertedCount < pending.size())
    {
        // Determine the next group limit using Jacobsthal
        size_t limit = jacobsthal[jacobsthalIdx];
        if (limit > pending.size()) limit = pending.size();

        // Process the group from limit-1 down to pendingIdx (reverse order)
        for (size_t i = limit; i > pendingIdx; --i)
        {
            ValueType valToInsert = pending[i - 1]; // pending is 0-indexed
            
            // Find the "Buddy Winner" for this loser to define the search range.
            // valToInsert is L_(i+1). Its buddy is W_(i+1).
            // We find W_(i+1) in mainChain to determine the upper bound.
            // Note: Optimizing this search is key for performance, but std::find is safe for correctness here.
            
            ValueType buddyWinner;
            bool foundBuddy = false;
            
            // Find buddy in pairs (inefficient but correct for simple types)
            for(size_t p=0; p<pairs.size(); ++p) {
                if(pairs[p].second == valToInsert) {
                    buddyWinner = pairs[p].first;
                    foundBuddy = true;
                    break;
                }
            }

            typename Container::iterator searchEnd;
            if (foundBuddy) {
                // Search for buddy in mainChain to get iterator
                searchEnd = std::find(mainChain.begin(), mainChain.end(), buddyWinner);
            } else {
                searchEnd = mainChain.end();
            }

            // Binary Search insertion
            typename Container::iterator insertPos = binarySearch(mainChain.begin(), searchEnd, valToInsert);
            mainChain.insert(insertPos, valToInsert);
            
            insertedCount++;
        }
        
        pendingIdx = limit;
        jacobsthalIdx++;
    }

    // 6. Insert Straggler (if it existed)
    if (hasStraggler)
    {
        typename Container::iterator insertPos = binarySearch(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(insertPos, straggler);
    }

    // Copy back to original container
    container = mainChain;
}

template <typename T>
void sortsFordJohnson(T& container)
{
    mergeInsertionSortImpl(container);
}

class PmergeMe{
        std::deque<int> deq;
        std::list<int> list;
        void processInput(int ac, char **av);
        void storeInput(char *av);
        void application();
        class inputError : public std::exception{
        const char*what() const throw(){
            return "ERROR: bad input.";
        }
    };
    public:
        PmergeMe();
        PmergeMe(int ac, char **av);
        PmergeMe(PmergeMe &copy);
        PmergeMe &operator=(PmergeMe &copy);
        ~PmergeMe();
};