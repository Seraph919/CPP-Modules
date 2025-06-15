#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

class Brain
{
private:
public:
    string *ideas;
    Brain();
    Brain(Brain &copy);
    Brain &operator=(const Brain &copy);
    virtual ~Brain();
};

#endif