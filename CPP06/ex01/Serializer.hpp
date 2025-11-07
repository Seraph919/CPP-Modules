#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "data.hpp"

#include <cstdlib>
#include <stdint.h>

class Serializer{
private:
    Serializer();
    Serializer(const Serializer &copy);
    Serializer &operator=(const Serializer &src);
    ~Serializer();
public:
    static uintptr_t   Serializer::serialize(Data *ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif