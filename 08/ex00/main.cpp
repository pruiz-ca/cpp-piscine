/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 18:05:20 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main( void )
{
	std::vector<int>	container;

	container.push_back(0);
	container.push_back(42);
	container.push_back(99);
	container.push_back(2000);

	try {
		std::cout << easyfind(container, 100) << " found!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << easyfind(container, 42) << " found!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << easyfind(container, 99) << " found!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}
