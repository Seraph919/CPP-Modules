#include "easyfind.hpp"

int main()
{
    std::vector<int> a;
    for (int i = 0; i < 12; i++)
    {
        int x = rand() % 100;
        std::cout << "value : " << x << '\n';
        a.push_back(x);
    }
    try {
        std::vector<int>::iterator it = easyfind(a, 77);
        std::cout << "the value " << *it << " found" << std::endl;
        (void) it;
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}