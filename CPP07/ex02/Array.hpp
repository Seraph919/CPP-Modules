#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T               *content;
        unsigned int    size;

    public:
        Array() : content(NULL), size(0)
        {
        }

        Array(unsigned int n) : content(NULL), size(n)
        {
            if (n > 0)
                content = new T[n]();
        }

        Array(const Array &copy) : content(NULL), size(copy.size)
        {
            if (size > 0)
            {
                content = new T[size]();
                for (unsigned int i = 0; i < size; ++i)
                    content[i] = copy.content[i];
            }
        }

        Array   &operator=(const Array &src)
        {
            if (this != &src)
            {
                if (content)
                    delete[] content;

                size = src.size;
                if (size > 0)
                {
                    content = new T[size]();
                    for (unsigned int i = 0; i < size; ++i)
                        content[i] = src.content[i];
                }
                else
                    content = NULL;
            }
            return (*this);
        }

        ~Array()
        {
            if (content)
                delete[] content;
        }

        T   &operator[](unsigned int idx)
        {
            if (idx >= size)
                throw std::out_of_range("Index out of bounds");
                
            return (content[idx]);
        }

        const T &operator[](unsigned int idx) const
        {
            if (idx >= size)
                throw std::out_of_range("Index out of bounds");

            return (content[idx]);
        }

        unsigned int    size() const
        {
            return (size);
        }
};

#endif