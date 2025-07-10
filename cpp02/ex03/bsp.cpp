/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:39:45 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/10 09:45:49 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// This is a determinant-based formula for the area of a triangle in 2D. The general form is:
// Area=1 / 2 * x1(y2−y3) + x2(y3−y1) + x3(y1−y2)

static float area (const Point a, const Point b, const Point c)
{
	float	area;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	area =	(
			( a.get_fixed_xval() * ( b.get_fixed_yval() - c.get_fixed_yval() ) )
			+ ( b.get_fixed_xval() * ( c.get_fixed_yval() - a.get_fixed_yval() ) )
			+ ( c.get_fixed_xval() * ( a.get_fixed_yval() - b.get_fixed_yval() ) )
			)
			/ 2;

	if (area >= 0)
		return (area);
	else
		return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float d0, d1, d2, d3;
	bool ret_val = false;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	if ( d1 == 0 || d2 == 0 || d3 == 0)
		ret_val = false;
	else if ( d1 + d2 + d3 == d0 )
		ret_val = true;

	return (ret_val);
}