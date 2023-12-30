/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:44:43 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:58:21 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	if (this != &other)
	{
	}
	return *this;
}

Form*	Intern::makeshrub( std::string target )
{
	Form*	shrubform = new ShrubberyCreationForm( target );
	return shrubform;
}

Form*	Intern::makerobotomy( std::string target )
{
	Form*	robotomyform = new RobotomyRequestForm( target );
	return robotomyform;
}

Form*	Intern::makepardon( std::string target )
{
	Form*	pardonform = new PresidentialPardonForm( target );
	return pardonform;
}

Form*	Intern::makeForm( std::string form, std::string target )
{
	fpointer	fArray[3] = {&Intern::makeshrub, &Intern::makeshrub, &Intern::makeshrub};
	std::string	fName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (form == fName[i])
		{
			std::cout << "Intern creates [" << form << "]" << std::endl;
			return (this->*fArray[i])(target);
		}
	}
	std::cout << "[" << form << "] is not a valid form" << std::endl;
	return NULL;
}
