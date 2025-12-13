#pragma once

#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

class RPN{
    std::stack<std::string> stack;
    RPN();
    int add(int a, int b);
    int substract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
    void inputTreatment(char *av);

    std::vector<std::string> splitString(const std::string& str, const std::string& delimiter);
    public:
    RPN(char *av);
    RPN(RPN &copy);
    class inputError : public std::exception{
        const char*what() const throw(){
            return "ERROR: please enter a valid input.";
        }
    };
    RPN &operator=(const RPN &copy);
    ~RPN();
};