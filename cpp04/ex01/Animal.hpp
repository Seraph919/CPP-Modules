#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using namespace std;

class Animal
{
private:
    string Type;
public:
    Animal();
    Animal(string _Type);
    Animal(Animal &copy);
    Animal &operator=(const Animal &other);
    void setType(string _Type);
    string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif