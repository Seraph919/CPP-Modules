#pragma once

#include <deque>
#include <list>

#include <sstream>
#include <iostream>
#include <stdexcept>
#include "helpers.hpp"

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