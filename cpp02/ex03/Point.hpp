/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:40:14 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/10 09:52:38 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    const Fixed &get_x() const ;
    const Fixed &get_y() const ;
    float get_fixed_xval() const;
    float get_fixed_yval() const;
    Point(const float _x, const float _y);
    Point(const Point &copy);
    Point &operator=(const Point &copy);
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif