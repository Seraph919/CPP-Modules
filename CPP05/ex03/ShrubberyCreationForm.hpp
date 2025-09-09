#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string Target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();

    void    execute(Bureaucrat const &executor) const;
};

#endif
