#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
using namespace std;
class Dog : public Animal
{
private:

public:
    Dog();
    Dog& operator=(const Dog &other);
    Dog(Dog &other);
    void makeSound() const;
    ~Dog();
};

#endif