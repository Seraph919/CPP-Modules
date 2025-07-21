/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:40:05 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/14 08:11:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

const Fixed &Point::get_x() const
{
    return this->x;
}

const Fixed &Point::get_y() const
{
    return this->y;
}

float Point::get_xval() const
{
    return get_x().toFloat();
}

float Point::get_yval() const
{
    return get_y().toFloat();
}

Point &Point::operator=(const Point &copy)
{
    Point *ret = new Point(copy);
    return *ret;
}

Point::~Point()
{
    
}