#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    Type = type;
    std::cout << "Paramitized Constructor Called\n";
}

std::string const &AMateria::getType() const
{
    return Type;
}

AMateria* AMateria::clone() const
{
    return (NULL);
}

void AMateria::use(ICharacter& target)
{
}
