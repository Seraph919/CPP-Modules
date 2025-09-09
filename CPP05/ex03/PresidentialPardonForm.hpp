#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
   std::string target;
public:
    PresidentialPardonForm(const std::string &Target);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();

    void    execute(Bureaucrat const &executor) const;
};

#endif