/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 00:17:47 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:51:35 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef void (Karen::*FunctionPointer)( void );

Karen::Karen ( void )
{
	std::cout << "A wild Karen appeared!" << std::endl;
	std::cout << "------" << std::endl;
}

Karen::~Karen ( void )
{
	std::cout << "------" << std::endl;
	std::cout << "Karen escaped!" << std::endl;
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra baconfor my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extrabacon cost more money."
		<< "You don’t put enough! If you did I would not have to askfor it!"
		<< std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve beencoming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void	Karen::complain( std::string level )
{
	int				i = -1;
	std::string 	reference[4] = { "debug", "info", "warning", "error" };
	FunctionPointer	functionPointer[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	while (++i < 4)
		if (reference[i] == level)
			(this->*(functionPointer[i]))();
}

void	Karen::filter( std::string level )
{
	int		levelNum;

	if (level == "debug")
		levelNum = 1;
	if (level == "info")
		levelNum = 2;
	if (level == "warning")
		levelNum = 3;
	if (level == "error")
		levelNum = 4;
	switch (levelNum)
	{
		case (1):
			Karen::complain("debug");
		case (2):
			Karen::complain("info");
		case (3):
			Karen::complain("warning");
		case (4):
			Karen::complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
