/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:40:05 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/10 09:52:50 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    //TODO: find out why i cant do x.set...(0)
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

float Point::get_fixed_xval() const
{
    return get_x().getRawBits();
}

float Point::get_fixed_yval() const
{
    return get_y().getRawBits();
}

Point &Point::operator=(const Point &copy)
{
    Point *ret = new Point(copy);
    return *ret;
}

Point::~Point()
{
    
}