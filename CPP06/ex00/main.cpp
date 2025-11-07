#include "ScalarConverter.hpp"
#include "includes.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string str = av[1];
		ScalarConverter::convert(str);
	}
	else
		std::cout << "Please input a valid option!" << std::endl;
	return 0;

}
