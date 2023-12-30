/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:19:01 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 11:47:57 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const num )
{
	this->_fixedPoint = num * (1 << this->_fractBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const num )
{
	this->_fixedPoint = roundf(num * (1 << this->_fractBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& f1 )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f1;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = f1.getRawBits();
	return *this;
}

std::ostream&	operator<<( std::ostream& os, Fixed const &fixedPoint )
{
	os << fixedPoint.toFloat();
	return os;
}
