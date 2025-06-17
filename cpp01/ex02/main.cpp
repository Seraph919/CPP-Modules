/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 08:57:43 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/16 20:58:31 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str =  "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    
    std::cout << "String Located in: " << &str << "\n";
    std::cout << "Pointer points to: " << stringPTR << "\n";
    std::cout << "Actual pointer adress: " << &stringPTR << "\n";
    std::cout << "Refrence Located in: " << &stringREF << "\n\n";   
    
    std::cout << "The Str is: \"" << str << "\" \n";
    std::cout << "The Value Held By ptr: \"" << *stringPTR << "\" \n";
    std::cout << "The Reference Value is : " << stringREF << "\" \n";
}