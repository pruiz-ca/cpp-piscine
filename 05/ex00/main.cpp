/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:30:07 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 15:59:10 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat antonia("antonia", 0);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		Bureaucrat paco("paco", 151);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "=====" << std::endl;

	Bureaucrat pepe("Pepe", 1);
	Bureaucrat manolo("Manolo", 150);

	std::cout << pepe << std::endl;
	std::cout << manolo << std::endl;

	std::cout << "=====" << std::endl;

	try {
		pepe.incrementGrade();
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		manolo.decrementGrade();
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "=====" << std::endl;

	try {
		pepe.decrementGrade();
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		manolo.incrementGrade();
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << pepe << std::endl;
	std::cout << manolo << std::endl;

	return (0);
}
