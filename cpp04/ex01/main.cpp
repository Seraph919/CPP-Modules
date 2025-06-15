#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    Animal **AnimalObjects = new Animal*[100];

    for (int i = 0; i < 50; i++)
        AnimalObjects[i] = new Dog();
    
    for (int i = 50; i < 100; i++)
        AnimalObjects[i] = new Cat();

    for (int i = 0; i < 100; i++)
        delete AnimalObjects[i];

    delete [] AnimalObjects;

    return 0;
}