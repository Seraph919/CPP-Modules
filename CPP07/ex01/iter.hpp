/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:19:42 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:19:43 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void printer(const T &element)
{
    std::cout << element << std::endl;
}

template <typename T>
void iter(T array[], size_t length, void (*foo)(T &))
{
    for (size_t i = 0; i < length; i++)
        foo(array[i]);
}

template <typename T>
void iter(T array[], size_t length, void (*foo)(const T &))
{
    for (size_t i = 0; i < length; i++)
        foo(array[i]);
}

#endif