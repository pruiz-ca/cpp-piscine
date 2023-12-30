/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:30:07 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 16:01:49 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	pepe("Pepe", 1);
	Bureaucrat	manolo("Manolo", 150);
	Form		contract("Rent contract", 5, 10);

	try {
		Form		contract2("Rent contract2", 1, 0);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		Form		contract3("Rent contract3", 0, 152);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "=====" << std::endl;

	std::cout << pepe << std::endl;
	std::cout << manolo << std::endl;
	std::cout << contract << std::endl;

	std::cout << "=====" << std::endl;

	try {
		manolo.signForm(contract);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		pepe.signForm(contract);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		pepe.signForm(contract);
	}
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	return 0;
}
