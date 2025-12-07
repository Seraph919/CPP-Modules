#include "BitcoinExchange.hpp"

btc::btc(){}
btc::btc(const btc &copy){ *this = copy; }
btc::~btc(){ data.close(); inputFile.close(); }

btc::btc(char *av){
    dataTreatment();
    fileTreatment(av);
    resultfun();
}

void btc::dataTreatment(){
    data.open("./data.csv");
    if (data.fail())
    throw std::runtime_error("Error: data.csv is not in the current directory\n");
    std::string line;
    getline(data, line);
    while (getline(data, line))
    {
        std::stringstream date;
        std::stringstream value;
        float floatVal;
        size_t pos = line.find(',');
        date.str(line.substr(0,pos));
        value.str(line.substr(pos + 1));
        value >> floatVal;
        dataContainer.insert(std::make_pair(date.str(), floatVal));
    }
}


void btc::validateDate(const std::string &date)
{
    std::string part[3];
    std::string error = "bad input => " + date;
    size_t pos1 = date.find('-');
    if (pos1 == date.npos)
        throw std::logic_error(error.c_str());
    size_t pos2 = date.find('-', pos1 + 1);
    if (pos2 == date.npos)
        throw std::logic_error(error.c_str());

    part[0] = date.substr(0, pos1);
    std::stringstream year(part[0]);
    int intDate;
    year >> intDate;
    if (intDate > 2025 || intDate < 2009)
        throw std::logic_error(error.c_str());
    part[1] = date.substr(pos1 + 1, pos2 - pos1 - 1);
    std::stringstream mounth(part[1]);
    mounth >> intDate;
    if (intDate > 12 || intDate < 1)
        throw std::logic_error(error.c_str());
    part[2] = date.substr(pos2 + 1);
    std::stringstream day(part[2]);
    day >> intDate;
    if (intDate > 31 || intDate < 1)
        throw std::logic_error(error.c_str());
    
}

void btc::fileTreatment(char *av)
{
    inputFile.open(av);
    if (inputFile.fail())
    throw std::logic_error("Error: could not open input file.\n");
    std::string line;
    getline(inputFile, line);
    while (getline(inputFile, line))
    {
        try
        {
            size_t pos = line.find('|');
            std::string error = "bad input => " + line;
            if (line.npos == pos)
                throw std::logic_error(error.c_str());
            std::stringstream date;
            std::stringstream value;
            float floatVal;
            date.str(line.substr(0,pos));
            validateDate(date.str());
            value.str(line.substr(pos + 1));
            value >> floatVal;
            if (floatVal < 0)
                throw std::logic_error("Error: not a positive number");
            else if (floatVal > 1000)
                throw std::logic_error("Error: too large number");
            map_iter it = dataContainer.lower_bound(date.str());
            if (it != dataContainer.begin())
                it--;
            else
                throw std::logic_error("that's not a valid date");
            std::cout << date.str() << " => " << floatVal << " = " 
            << it->second * floatVal << '\n';
        }catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    
}

void btc::resultfun()
{

}

btc &btc::operator=(const btc &copy){
    if (this != &copy)
    {
        this->dataContainer = copy.dataContainer;
        this->result = copy.result;
    }
    return *this;
}