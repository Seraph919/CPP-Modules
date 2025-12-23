#include "helpers.hpp"

int counter = 0;

int isPositiveNumbers(char *str)
{
    int i = 0;
    if (str[0] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
        {
            std::cout << "error caused by [" << str[i] << "]\n";
            return 0;
        }
        i++;
    }
    return 1;
}

double getTimeUs()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000000.0 + tv.tv_usec);
}


void storeInput(char *av, std::deque<int> &deq, std::vector<int> &vector)
{
    std::string str(av);
    std::deque<std::string> numbers =  splitString(str, " ");
    for (size_t i = 0; i < numbers.size(); i++)
    {
        int n;
        std::stringstream sstr(numbers[i]);
        sstr >> n; 
        deq.push_back(n);
        vector.push_back(n);
    }
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
