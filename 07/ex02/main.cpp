/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 14:49:47 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main( void )
{
	Array<int>	empty;
	Array<int>	small(4);
	Array<int>	big(8);

	std::cout << std::endl << "===== CREATION ===== " << std::endl;
	for (int i = 0; i < small.size(); i++)
		small[i] = 42 + i;
	std::cout << "Empty size: " << empty.size() << std::endl;
	std::cout << "Empty array: " << empty << std::endl;
	std::cout << "Small size: " << small.size() << std::endl;
	std::cout << "Small array: " << small << std::endl;
	std::cout << "Big size: " << big.size() << std::endl;
	std::cout << "Big array: " << big << std::endl;

	std::cout << std::endl << "===== COPY ===== " << std::endl;
	empty = small;
	big = empty;
	for (int i = 0; i < empty.size(); i++)
		empty[i] -= 42;
	for (int i = 0; i < big.size(); i++)
		big[i] *= 2;
	std::cout << "Empty size: " << empty.size() << std::endl;
	std::cout << "Empty array: " << empty << std::endl;
	std::cout << "Small size: " << small.size() << std::endl;
	std::cout << "Small array: " << small << std::endl;
	std::cout << "Big size: " << big.size() << std::endl;
	std::cout << "Big array: " << big << std::endl;

	std::cout << std::endl << "===== OUT OF LIMITS ACCESS ===== " << std::endl;
	std::cout << "big[+4]: ";
	try {
		big[0] = 2;
		big[4] = 2;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "big[-1]: ";
	try {
		big[3] = 2;
		big[-1] = 2;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}
