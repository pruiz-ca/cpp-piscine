/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:30:07 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:28:28 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat					pepe("Pepe", 1);
	Bureaucrat					manolo("Manolo", 146);

	manolo.incrementGrade();
	std::cout << pepe << std::endl;
	std::cout << manolo << std::endl;

	std::cout << std::endl << "===== BUREAUCRAT SIGN/EXECUTE TEST =====" << std::endl;

	PresidentialPardonForm		pardon("abello-r");
	RobotomyRequestForm			robotomy("abello-r");
	ShrubberyCreationForm		shrubbery("abello's home");

	std::cout << pardon << std::endl;
	try {
		pepe.signForm(pardon);
		pepe.executeForm(pardon);
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << std::endl;

	std::cout << robotomy << std::endl;
	try {
		pepe.signForm(robotomy);
		pepe.executeForm(robotomy);
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << std::endl;

	std::cout << shrubbery << std::endl;
	try {
		pepe.signForm(shrubbery);
		pepe.executeForm(shrubbery);
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	return (0);
}
