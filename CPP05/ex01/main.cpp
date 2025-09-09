/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:06:38 by seraph919         #+#    #+#             */
/*   Updated: 2025/07/29 16:57:28 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("luffy", 150);
        Form f("marineford", 40, 30);

        std::cout << b << std::endl;
        std::cout << f << std::endl;

        b.signForm(f);

        Bureaucrat b2("sabo", 30);
        b2.signForm(f);

        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
		return 1;
    }
    return 0;
}