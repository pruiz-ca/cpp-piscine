/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:25:09 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 19:41:32 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	x = point.getX();
	Fixed	y = point.getY();
	Fixed	x1 = a.getX();
	Fixed	y1 = a.getY();
	Fixed	x2 = b.getX();
	Fixed	y2 = b.getY();
	Fixed	x3 = c.getX();
	Fixed	y3 = c.getY();

	float A = ((y2 - y3) * (x - x3) + (x3 - x2) * (y - y3)) / ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
	float B = ((y3 - y1) * (x - x3) + (x1 - x3) * (y - y3)) / ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
	float C = 1 - A - B;

	if (0 < A && A < 1 && 0 < B && B < 1 && 0 < C && C < 1)
		return true;
	return false;
}
