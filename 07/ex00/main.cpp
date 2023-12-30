/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 14:42:02 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int		main( void )
{
	int		a = 2;
	int		b = 3;

	std::cout << "before: a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after : a = " << a << ", b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl << "=====" << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "before: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after : c = " << c << ", d = " << d << std::endl;

	std::cout << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
