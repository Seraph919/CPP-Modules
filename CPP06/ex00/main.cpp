/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:17:27 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:17:28 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "includes.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string str = av[1];
		ScalarConverter::convert(str);
	}
	else
		std::cout << "Please input a valid option!" << std::endl;
	return 0;

}
