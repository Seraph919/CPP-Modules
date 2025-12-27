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
void RPN::inputTreatment(char *av)
{
    std::istringstream iss(av);
    std::string token;
    long result = 0;
    while (iss >> token) {
        if (token.size() > 1)
            throw inputError();

        char c = token[0];
        if (isoperator(c)) {
            if (stack.size() > 1) {
                int b = std::atoi(stack.top().c_str());
                stack.pop();
                int a = std::atoi(stack.top().c_str());
                stack.pop();

                switch (c) {
                    case '*':
                        result = multiply(a, b);
                        break;
                    case '-':
                        result = substract(a, b);
                        break;
                    case '+':
                        result = add(a, b);
                        break;
                    case '/':
                        result = divide(a, b);
                        break;
                }
                std::stringstream out;
                out << result;
                stack.push(out.str());
            } else {
                throw std::runtime_error("ERROR: not enough stacked numbers for the operation.");
            }
        } else if (std::isdigit(static_cast<unsigned char>(c))) {
            stack.push(token);
        } else {
            throw inputError();
        }
    }

    if (stack.size() > 1)
        throw std::runtime_error("ERROR: leftover operand with no operator to apply.");
    if (stack.empty())
        throw inputError();
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