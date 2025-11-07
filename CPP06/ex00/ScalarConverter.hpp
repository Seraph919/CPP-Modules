#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "includes.hpp"

class ScalarConverter
{
        ScalarConverter();
        ScalarConverter(const ScalarConverter &c);
        ScalarConverter &operator=(const ScalarConverter &c);
        ~ScalarConverter();
    public:
        static void convert(const std::string &converted);
};
#endif