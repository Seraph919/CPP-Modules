/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:16:11 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:17:06 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern{
    public:
    Intern();
    Intern(const Intern &cp);
    Intern &operator=(const Intern &cp);
    ~Intern();

    AForm *makeForm(const std::string &formName, const std::string &Target);
};


#endif