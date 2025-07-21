/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:39:45 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/17 13:49:57 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// The general formula is:
//           
// Area = |x1 * (y2−y3) + x2 * (y3−y1) + x3 * (y1−y2)| / 2

static float area (const Point a, const Point b, const Point c)
{
	float	area;
	area =	(
			( a.get_xval() * ( b.get_yval() - c.get_yval() ) )
			+ ( b.get_xval() * ( c.get_yval() - a.get_yval() ) )
			+ ( c.get_xval() * ( a.get_yval() - b.get_yval() ) )
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
	// std::cout << "triangle area = " << static_cast<int>(d0) << '\n';
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	if ( d1 == 0 || d2 == 0 || d3 == 0)
		ret_val = false;
	else if ( d1 + d2 + d3 == d0 )
		ret_val = true;

	return (ret_val);
}
