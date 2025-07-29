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

int main()
{
    try
    {
        Bureaucrat s("ayoub", 1);
		std::cout << "the Bureaucrat: \n" <<s << '\n';
		std::cout << "trying to decrement the Grade\n";
        s.decrementGrade();
		std::cout << s << '\n';
		std::cout << "SUCCESS\n";

		std::cout << "trying to increment the Grade\n";
        s.incrementGrade();
		std::cout << s << '\n';
		std::cout << "SUCCESS\n";

		std::cout << "trying to increment the Grade\n";
		s.incrementGrade();
		std::cout << s << '\n';
		std::cout << "SUCCESS\n";
		
		std::cout << "trying to decrement the Grade\n";
		s.decrementGrade();
		std::cout << s << '\n';
		std::cout << "SUCCESS\n";
    }
    catch (std::exception &e)
    {
        std::cout << "Exeption cought: "<< e.what()<<std::endl;
    }
}