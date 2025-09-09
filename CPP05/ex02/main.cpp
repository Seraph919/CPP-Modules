#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);

        PresidentialPardonForm pForm("Charlie");
        RobotomyRequestForm rForm("Dave");
        ShrubberyCreationForm sForm("Eve");

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        std::cout << pForm << std::endl;
        std::cout << rForm << std::endl;
        std::cout << sForm << std::endl;

        b1.signForm(pForm);
        b1.signForm(rForm);
        b1.signForm(sForm);

        std::cout << pForm << std::endl;
        std::cout << rForm << std::endl;
        std::cout << sForm << std::endl;

        b1.executeForm(pForm);
        b1.executeForm(rForm);
        b1.executeForm(sForm);

        // b2.signForm(pForm);
        // b2.executeForm(pForm);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}