#include "Brain.hpp"

Brain::Brain()
{
    cout << "Brain default constructor called\n";
    ideas = new string[100];
}

Brain::Brain(Brain &copy)
{
    ideas = new string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    cout << "Brain copy constructor called\n";
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
        cout << "Brain assignment operator called\n";
    }
    return *this;
}

Brain::~Brain()
{
    cout << "Brain destructor called\n";
    delete [] ideas;
}
