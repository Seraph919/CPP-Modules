/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:09:31 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/14 08:08:17 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) 
{
    Point a(0, 0);
    Point b(3, 5);
    Point c(6, 0);

    Point point(2, 3);
    if (bsp(a, b, c, point))
        std::cout << "The point is inside the Triangle\n";
    else
        std::cout << "The point is NOT inside the Triangle\n";
}
