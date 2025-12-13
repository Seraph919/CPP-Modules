#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return std::cerr << "Error: you must at least give "
        << "2 numbers and an operator\n" << std::endl, 1;
    RPN(*(av + 1));
}

// ./RPN "1 2 * 2 / 2 * 2 4 - +" !this should work!

// 1 2 push push 
//  * found op, check if you have 2 numbers
//  pop pop
// do op and push result
// 1 push
//  / found op, check if you have 2 numbers
// we have result and 2
// pop pop
// do op and push result
// 2 push
//  * found op, check if you have 2 numbers
// we have result and 2
// pop pop
// do op and push result
// 2 4 push push
// - found op
// check if you have 2 numbers
// we have prev result and 2 other numbers
// 