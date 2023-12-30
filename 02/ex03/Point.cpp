/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:25:12 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 13:00:17 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	return ;
}

Point::Point( float const x, float const y ) : _x(x), _y(y)
{
	return ;
}

Point::~Point( void )
{
	return ;
}

Point::Point(Point const &other) : _x(other.getX()), _y(other.getY())
{
	return ;
}

Point &Point::operator=(Point const &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Fixed const&		Point::getX( void ) const
{
	return this->_x;
}

Fixed const&		Point::getY( void ) const
{
	return this->_y;
}
