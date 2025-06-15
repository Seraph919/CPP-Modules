#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

using namespace std;

class Cat : public Animal
{
private:
    class Brain *brain;
public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(Cat &other);
    void makeSound() const;
    virtual ~Cat();
};

#endif