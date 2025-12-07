#pragma once


#include <map>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>

typedef std::map<std::string, float>::iterator map_iter;

class btc{
        std::map<std::string, float> dataContainer;
        std::ifstream data;
        std::ifstream inputFile;
        std::string result;
        btc();
        void validateDate(const std::string &date);
        void dataTreatment();
        void fileTreatment(char *av);
    public:
        btc(char *av);
        btc(const btc &copy);
        btc &operator=(const btc &copy);
        void resultfun();
        ~btc();
}; 