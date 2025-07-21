#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    static int i = 0;
    if (i < 4)
    {
        materias[i] = m;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = copy.materias[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
            this->materias[i] = copy.materias[i];
    }
    return *this;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0;materias[i]; i++)
    {
        const std::string temp = materias[i]->getType(); 
        if (type == temp)
        {
            AMateria *returned = materias[i]->clone();
            return returned;
        }
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL)
            delete materias[i];
    }
}
