/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:47:03 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 19:41:42 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#define NOCOL "\001\e[0m\002"
#define RED "\001\e[1;31m\002"
#define GRN "\001\e[1;32m\002"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main ( void )
{
	Point	a1 = Point();
	Point	b1 = Point(0, 5);
	Point	c1 = Point(5, 0);
	float	x;
	float	y;
	bool	res;

	while (1)
	{
		std::cout << "X value: ";
		if (!(std::cin >> x))
		{
			std::cout << "Input Error" << std::endl;
			return 1 ;
		}
		std::cout << "Y value: ";
		if (!(std::cin >> y))
		{
			std::cout << "Input Error" << std::endl;
			return 1 ;
		}

		Point	point = Point(x, y);

		res = bsp(a1, b1, c1, point);

		if (res == true)
			std::cout << GRN << "--> IN <--" << NOCOL << std::endl;
		else
			std::cout << RED << "--> OUT <--" << NOCOL << std::endl;

		std::cout << "=====" << std::endl;
	}
	return 0;
}
