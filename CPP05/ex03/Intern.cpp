#include "Intern.hpp"

std::string &lower(std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = std::towlower(str[i]);
    }
    return str;
}

AForm *retPresidential(const std::string &Target){
    PresidentialPardonForm *ret = new PresidentialPardonForm(Target);
    std::cout << "Intern creates " << ret->getName() << std::endl;
    return ret;
}
AForm *retRobotomy(const std::string &Target){
    RobotomyRequestForm *ret = new RobotomyRequestForm(Target);
    std::cout << "Intern creates " << ret->getName() << std::endl;
    return ret;
}
AForm *retShrubbery(const std::string &Target){
    ShrubberyCreationForm *ret = new ShrubberyCreationForm(Target);
    std::cout << "Intern creates " << ret->getName() << std::endl;
    return ret;
}

Intern::Intern(){}
Intern::Intern(const Intern &cp){
    (void)cp;
}
Intern &Intern::operator=(const Intern &cp){
    (void)cp;
    return *this;
}
Intern::~Intern(){}

AForm *Intern::makeForm(const std::string &formName, const std::string &Target){
    
    AForm *(*functions[])(const std::string &) = {
        retPresidential, retRobotomy, retShrubbery
    };

    std::string name = formName;
    name = lower(name);

    std::string Forms[] = {"presidential pardon", "robotomy request" , "shrubbery creation"};
    for (int i = 0 ; i < 3; i++)
        if (Forms[i] == name)
            return functions[i](Target);

    std::cerr << "Intern Doesn't recorgnize FormType\n";
    return NULL;
}