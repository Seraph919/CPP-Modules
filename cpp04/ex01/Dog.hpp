#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

using namespace std;

class Dog : public Animal
{
private:
    class Brain *brain;
public:
    Dog();
    Dog& operator=(const Dog &other);
    Dog(Dog &other);
    void makeSound() const;
    virtual ~Dog();
};

#endif