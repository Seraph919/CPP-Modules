#include "ScalarConverter.hpp"

Kinds resolveKinds(const std::string &token)
{
    if (token.empty())
        return KIND_INVALID;

    if (token.size() == 1 && !std::isdigit(static_cast<unsigned char>(token[0])))
        return KIND_CHAR;

    if (token == "nanf" || token == "+inff" || token == "-inff")
        return KIND_FLOAT;

    if (token == "nan" || token == "+inf" || token == "-inf")
        return KIND_DOUBLE;

    char *endptr;
    long parsed = std::strtol(token.c_str(), &endptr, 10);
    if (*endptr == '\0' && parsed >= std::numeric_limits<int>::min() && parsed <= std::numeric_limits<int>::max())
        return KIND_INT;

    if (token.size() > 1 && token[token.size() - 1] == 'f')
    {
        std::string preliminary = token.substr(0, token.size() - 1);
        float value = std::atof(preliminary.c_str());

        if (value != 0.0f || preliminary == "0")
            return KIND_FLOAT;
    }

    double value = std::atof(token.c_str());
    if (value != 0.0 || token == "0")
        return KIND_DOUBLE;

    return KIND_INVALID;
}

bool isPrintableChar(char ch)
{
    return (ch >= 32 && ch <= 126);
}

void printAllImpossible()
{
    std::cout << "char:   impossible\nint:    impossible\nfloat:  impossible\ndouble: impossible" << std::endl;
}

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &c){ (void)c; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &c){ return (void)c, *this; }
ScalarConverter::~ScalarConverter(){}

void    ScalarConverter::convert(const std::string &literal)
{
    const std::string &input = literal;
    Kinds kind = resolveKinds(input);

    std::cout << std::fixed << std::setprecision(1);

    switch (kind)
    {
        case KIND_CHAR:
        {
            char value = input[0];
            std::cout << "char:   '" << value << "'" << std::endl;
            std::cout << "int:    " << static_cast<int>(value) << std::endl;
            std::cout << "float:  " << static_cast<float>(value) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) << std::endl;
            break;
        }
        case KIND_INT:
        {
            long raw = std::strtol(input.c_str(), NULL, 10);

            if (raw < std::numeric_limits<int>::min() || raw > std::numeric_limits<int>::max())
            {
                printAllImpossible();
                break;
            }

            int number = static_cast<int>(raw);
            char asChar = static_cast<char>(number);

            if (isPrintableChar(asChar))
                std::cout << "char:   '" << asChar << "'" << std::endl;
            else if (number >= 0 && number <= 127)
                std::cout << "char:   Non displayable" << std::endl;
            else
                std::cout << "char:   impossible" << std::endl;

            std::cout << "int:    " << number << std::endl;
            std::cout << "float:  " << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << std::endl;
            break;
        }
        case KIND_FLOAT:
        {
            float value;

            if (input == "nanf")
                value = NAN;
            else if (input == "+inff")
                value = INFINITY;
            else if (input == "-inff")
                value = -INFINITY;
            else
            {
                std::string withoutSuffix = input.substr(0, input.size() - 1);
                value = std::atof(withoutSuffix.c_str());
            }

            if (value != value || value == INFINITY || value == -INFINITY)
                std::cout << "char:   impossible\nint:    impossible" << std::endl;
            else
            {
                char asChar = static_cast<char>(value);
                int asInt = static_cast<int>(value);

                if (isPrintableChar(asChar))
                    std::cout << "char:   '" << asChar << "'" << std::endl;
                else if (asInt >= 0 && asInt <= 127)
                    std::cout << "char:   Non displayable" << std::endl;
                else
                    std::cout << "char:   impossible" << std::endl;

                std::cout << "int:    " << asInt << std::endl;
            }

            std::cout << "float:  " << value << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) << std::endl;
            break;
        }
        case KIND_DOUBLE:
        {
            double value;

            if (input == "nan")
                value = NAN;
            else if (input == "+inf")
                value = INFINITY;
            else if (input == "-inf")
                value = -INFINITY;
            else
                value = std::atof(input.c_str());

            if (value != value || value == INFINITY || value == -INFINITY)
                std::cout << "char:   impossible\nint:    impossible" << std::endl;
            else
            {
                char asChar = static_cast<char>(value);
                int asInt = static_cast<int>(value);

                if (isPrintableChar(asChar))
                    std::cout << "char:   '" << asChar << "'" << std::endl;
                else if (asInt >= 0 && asInt <= 127)
                    std::cout << "char:   Non displayable" << std::endl;
                else
                    std::cout << "char:   impossible" << std::endl;

                if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
                    std::cout << "int:    impossible" << std::endl;
                else
                    std::cout << "int:    " << asInt << std::endl;
            }

            std::cout << "float:  " << static_cast<float>(value) << "f" << std::endl;
            std::cout << "double: " << value << std::endl;
            break;
        }
        default:
        {
            printAllImpossible();
            break;
        }
    }
}