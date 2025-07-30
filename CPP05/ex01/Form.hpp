/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:00:25 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/30 00:28:01 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	const STR 	Name;
	bool		Signed;
	const int	grade;
	const int	execGrade;	
public:
	Form();
	Form(const STR &name, const int &Grade, const int &ExecGrade);
	Form(const Form &cp);
	Form &operator=(const Form &cp);

	const STR &getName() const;
	const int &getGrade() const;
	const bool &getStatus() const;
	const int &getExecGrade() const;
	void setSigned(bool sign);

	
	void beSigned();
	void signForm();
	~Form();
};

#endif