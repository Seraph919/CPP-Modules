#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
using namespace std;

class WrongAnimal
{
private:
    string Type;
public:
    WrongAnimal();
    WrongAnimal(string _Type);
    WrongAnimal(WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &other);
    void setType(string _Type);
    string getType() const;
    void makeSound() const;
    ~WrongAnimal();
};

#endif