#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
using namespace std;
class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    WrongCat& operator=(const WrongCat &other);
    WrongCat(WrongCat &other);
    void makeSound() const;
    ~WrongCat();
};

#endif