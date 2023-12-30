/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:30:07 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 18:15:52 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat					pepe("Pepe", 1);
	Bureaucrat					manolo("Manolo", 150);

	std::cout << pepe << std::endl;
	std::cout << manolo << std::endl;

	std::cout << std::endl << "===== INTERN TEST =====" << std::endl;
	Intern			randomguy;
	Form*			shrubbery;
	Form*			robotomy;
	Form*			pardon;

	std::cout << std::endl;

	pardon = randomguy.makeForm("presidential pardon", "Antonia");
	if (pardon != NULL)
	{
		try {
			pepe.signForm(*pardon);
			pepe.executeForm(*pardon);
		}
		catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	}

	std::cout << std::endl;

	robotomy = randomguy.makeForm("robotomy request", "Antonia");
	if (robotomy != NULL)
	{
		try	{
			pepe.signForm(*robotomy);
			pepe.executeForm(*robotomy);
		}
		catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	}

	std::cout << std::endl;

	shrubbery = randomguy.makeForm("shrubbery creation", "Antonia");
	if (shrubbery != NULL)
	{
		try {
			pepe.signForm(*shrubbery);
			pepe.executeForm(*shrubbery);
		}
		catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	}

	return (0);
}
