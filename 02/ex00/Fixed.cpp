/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:19:01 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 11:14:45 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const& f1 )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f1;
}

Fixed&	Fixed::operator=( Fixed const& f1 )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f1)
		this->_fixedPoint = f1.getRawBits();
	return *this;
}

int		Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits ( int const raw )
{
	this->_fixedPoint = raw;
}
