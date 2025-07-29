/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:07:04 by seraph919         #+#    #+#             */
/*   Updated: 2025/07/29 00:43:23 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

typedef std::string STR;

class Bureaucrat{
    const STR name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(STR name, int grade);
    const STR &getName();
    const int &getGrade();
    void incrementGrade();
    void decrementGrade();
    
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif