#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
using namespace std;
class Cat : public Animal
{
private:

public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(Cat &other);
    void makeSound() const;
    ~Cat();
};

#endif