/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:17:38 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:17:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "includes.hpp"

class ScalarConverter
{
        ScalarConverter();
        ScalarConverter(const ScalarConverter &c);
        ScalarConverter &operator=(const ScalarConverter &c);
        ~ScalarConverter();
    public:
        static void convert(const std::string &converted);
};
#endif