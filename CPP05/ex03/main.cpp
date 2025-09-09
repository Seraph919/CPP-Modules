#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        AForm* ppf;
        ppf = someRandomIntern.makeForm("presidential pardon", "Fry");
        AForm* scf;
        scf = someRandomIntern.makeForm("shrubbery creation", "Home");
        Bureaucrat b("Bureaucrat", 1);
        scf->beSigned(b);
        scf->execute(b);
        AForm* wrong;
        wrong = someRandomIntern.makeForm("wrong form", "nobody");
        delete rrf;
        delete ppf;
        delete scf;
        delete wrong;
    }
    catch (std::exception &e) {
        std::cerr << e.what();
        return 1;
    }
    return 0;
}