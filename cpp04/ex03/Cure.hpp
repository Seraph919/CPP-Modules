#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure() : AMateria("cure"){std::cout << "Default Cure Constuctor Called\n";};
    ~Cure(){std::cout << "Cure Destructor Called\n";};
};

#endif