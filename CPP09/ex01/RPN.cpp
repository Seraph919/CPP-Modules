#include "RPN.hpp"

RPN::RPN(){}

bool isoperator(char c)
{
    return (c == '*' || c == '/' || c == '+' || c == '-');
}

int RPN::add(int a, int b)
{
    return a + b;
}
int RPN::substract(int a, int b)
{
    return a - b;
}
int RPN::multiply(int a, int b)
{
    return a * b;
}
int RPN::divide(int a, int b)
{
    if (b == 0)
        throw std::runtime_error("can't devide by 0.");
    else
        return a / b;
}


std::vector<std::string> RPN::splitString(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t prev = 0;
    size_t current = str.find(delimiter);
    while (current != std::string::npos) {
        std::string token = str.substr(prev, current - prev);
        if (!token.empty())
        {
            if (token.size() > 1)
                throw inputError();
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

void RPN::inputTreatment(char *av)
{
    std::stringstream str(av);
    long result = 0;
    int a = 0;
    int b = 0;
    std::vector<std::string> strings = splitString(str.str(), " ");
    for (size_t i = 0; i < strings.size(); i++)
    {
        if (isoperator(strings[i][0]))
        {
            char op = strings[i][0];
            if (stack.size() > 1)
            {
                b = std::atoi(stack.top().c_str());
                stack.pop();
                a = std::atoi(stack.top().c_str());
                stack.pop();
                switch(op)
                {
                    case ('*'):
                        result = multiply(a, b);
                        break;
                    case ('-'):
                        result = substract(a, b);
                        break;
                    case ('+'):
                        result = add(a, b);
                        break;
                    case ('/'):
                        result = divide(a, b);
                        break;
                }
                std::stringstream str;
                str << result;
                stack.push(str.str());
            }
            else{
                throw std::runtime_error("ERROR: not enough stacked numbers for the operation.");
            }
        }
        else if (isdigit(strings[i][0])){
            stack.push(strings[i]);
        }
        else
            throw inputError();
    }
    if (stack.size() > 1)
        throw std::runtime_error("ERROR: leftover operand with no operator to apply.");
    std::cout << stack.top() << std::endl;
}

RPN::RPN(char *av){
    try{
        inputTreatment(av);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
}
RPN::RPN(RPN &copy){ *this = copy; }
RPN &RPN::operator=(const RPN &copy){ this->stack = copy.stack; return *this; }
RPN::~RPN(){

}