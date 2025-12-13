#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
        btc(*(av + 1));
    else
        return (std::cerr << "Error: could not open file.\n", 1);
}