/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:19:01 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 12:02:49 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixedPoint = 0;
}

Fixed::Fixed( int const num )
{
	this->_fixedPoint = num * (1 << this->_fractBits);
}

Fixed::Fixed( float const num )
{
	this->_fixedPoint = roundf(num * (1 << this->_fractBits));
}

Fixed::Fixed( Fixed const& f1 )
{
	*this = f1;
}

Fixed::~Fixed( void )
{
	return ;
}

int		Fixed::getRawBits( void ) const
{
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	float	res = (1.0000f * this->_fixedPoint) / (1 << this->_fractBits);
	return res;
}

int		Fixed::toInt( void ) const
{
	return roundf(this->toFloat());
}

Fixed&	Fixed::operator=( Fixed const& f1 )
{
	this->_fixedPoint = f1.getRawBits();
	return *this;
}

std::ostream&	operator<<( std::ostream& os, Fixed const &fixedPoint )
{
	os << fixedPoint.toFloat();
	return os;
}

bool	Fixed::operator>( Fixed const& f1 ) const
{
	return this->toFloat() > f1.toFloat();
}

bool	Fixed::operator<( Fixed const& f1 ) const
{
	return this->toFloat() < f1.toFloat();
}

bool	Fixed::operator>=( Fixed const& f1 ) const
{
	return this->toFloat() >= f1.toFloat();
}

bool	Fixed::operator<=( Fixed const& f1 ) const
{
	return this->toFloat() <= f1.toFloat();
}

bool	Fixed::operator==( Fixed const& f1 ) const
{
	return this->toFloat() == f1.toFloat();
}

bool	Fixed::operator!=( Fixed const& f1 ) const
{
	return this->toFloat() != f1.toFloat();
}

float	Fixed::operator*( Fixed const& f1 )
{
	return this->toFloat() * f1.toFloat();
}

float	Fixed::operator/( Fixed const& f1 )
{
	return this->toFloat() / f1.toFloat();
}

float	Fixed::operator+( Fixed const& f1 )
{
	return this->toFloat() + f1.toFloat();
}

float	Fixed::operator-( Fixed const& f1 )
{
	return this->toFloat() - f1.toFloat();
}

Fixed	Fixed::operator++( void )
{
	this->_fixedPoint++;
	return *this;
}

Fixed	Fixed::operator--( void )
{
	this->_fixedPoint--;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp(this->toFloat());
	this->_fixedPoint++;
	return tmp;
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp(this->toFloat());
	this->_fixedPoint--;
	return tmp;
}

Fixed const&			Fixed::max( Fixed const& f1, Fixed const& f2 )
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

Fixed const&			Fixed::min( Fixed const& f1, Fixed const& f2 )
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}
