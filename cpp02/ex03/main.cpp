/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:09:31 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/10 09:53:38 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) 
{
    Point a(2.0f, 0);
    Point b(9.0f, 8.0f);
    Point c(12.0f, 0);
    Point point(3.5f, 8.0f);
    
    std::cout << bsp(a, b, c, point);
}
