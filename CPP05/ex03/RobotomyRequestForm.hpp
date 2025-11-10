/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:16:35 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:17:06 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
private:
   std::string target;
public:
    RobotomyRequestForm(const std::string &Target);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();

    void    execute(Bureaucrat const &executor) const;
};

#endif

// void AForm::execute(const Bureaucrat &executor) const
// {
//         if (!getStatus())
//         throw NotSignedException();

//     if (executor.getGrade() > getExecGrade())
//         throw GradeTooLowException();

//     std::cout << "* Drilling noises *" << std::endl;

//     std::srand(time(0));
    
//     if (std::rand() % 2)
//         std::cout << target << " has been robotomized successfully!" << std::endl;
//     else
//         std::cout << "Robotomy failed on " << target << "!" << std::endl;
// }