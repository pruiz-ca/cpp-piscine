/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:09:02 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:28:15 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

int		robotomizeRulette( void )
{
	int		randomNumber;

	srand(time(NULL));
	randomNumber = rand() % 10 + 1;
	return randomNumber;
}

RobotomyRequestForm::RobotomyRequestForm( void )
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "roboto", 72, 45 )
{
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

void	RobotomyRequestForm::executeSpecific( void ) const
{
	std::cout << "** Making some drill noises **" << std::endl;
	if (robotomizeRulette() <= 5 )
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " failed to be robotomized" << std::endl;
}
