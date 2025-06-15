/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 08:57:43 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/03 09:18:01 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str =  "HI THIS IS BRAIN";
    std::cout << "The Str is: \"" << str << "\" ";
    std::cout << "Located in: " << &str << "\n\n";
    
    std::string *ptr = &str;
    std::cout << "The Value Held By ptr: \"" << *ptr << "\" ";
    std::cout << "Located in: " << ptr << "\n\n";
    
    std::string &ref = str;
    std::cout << "The Reference Value is : " << ref << "\" ";
    std::cout << "Located in: " << &ref << '\n';   
}