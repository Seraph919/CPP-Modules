/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:15:54 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 18:42:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//     ShrubberyCreationForm();
//     ShrubberyCreationForm(std::string Target);
//     ShrubberyCreationForm(const ShrubberyCreationForm &copy);
//     ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
//     ~ShrubberyCreationForm();

//     void    execute(Bureaucrat const &executor) const;


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("ShrubberyCreationForm", 145, 137), target(Target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy){
    target = copy.target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
    if (this != &src)
    {
        AForm::operator=(src);
        target = src.target;
    }
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
        if (!getStatus())
        throw NotSignedException();

    if (executor.getGrade() > getExecGrade())
        throw GradeTooLowException();
    std::ofstream ofs((target + "_shrubbery").c_str());
    if (!ofs)
        throw std::runtime_error("Failed to open file");
        
    ofs << "       _-_\n"
           "    /~~   ~~\\\n"
           " /~~         ~~\\\n"
           "{               }\n"
           " \\  _-     -_  /\n"
           "   ~  \\\\ //  ~\n"
           "_- -   | | _- _\n"
           "  _ -  | |   -_\n"
           "      // \\\\\n";
    ofs.close();
}