/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:47:03 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 12:01:59 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main ( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "====== Arithmetic Operators ======" << std::endl;
	std::cout << "a + a: " << a + a << std::endl;
	std::cout << "a - a: " << a - a << std::endl;
	std::cout << "a * a: " << a * a << std::endl;
	std::cout << "a / a: " << a / a << std::endl;

	std::cout << std::endl << "====== Comparison Operators ======" << std::endl;
	std::cout << "a >= b: ";
	if (a > b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a <= b: ";
	if (a < b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a == b: ";
	if (a == b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a == a: ";
	if (a == a)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << std::endl << "====== Max / Min ======" << std::endl;
	std::cout << "max(a,b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a,b): " << Fixed::min(a, b) << std::endl;


	return 0;
}
