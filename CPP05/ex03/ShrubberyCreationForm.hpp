/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:16:50 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:17:06 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
