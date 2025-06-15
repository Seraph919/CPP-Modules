#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    Ice() : AMateria("ice"){std::cout << "Default Ice Constuctor Called\n";};
    ~Ice(){std::cout << "Ice Destructor Called\n";};
};

#endif