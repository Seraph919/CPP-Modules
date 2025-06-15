#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    cout << getType() << " Default constructor called\n";
}

Dog::Dog(Dog &other) : Animal(other)
{
    cout << getType() << " Copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        cout << getType() << " Assignment operator called\n";
    }
    return *this;
}

void Dog::makeSound() const
{
    cout << "The " << getType() << " is Barking!\n";
}

Dog::~Dog()
{
    delete brain;
    cout << getType() << "  distructor called\n";
}