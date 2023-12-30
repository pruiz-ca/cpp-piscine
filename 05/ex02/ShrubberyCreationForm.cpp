/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:46:26 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:28:04 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "shrubbery", 145, 137 )
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other )
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other )
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

void				ShrubberyCreationForm::executeSpecific( void ) const
{
	std::ofstream file(this->_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return ;
	}
	file << std::endl
		<< "       _-_" << std::endl
		<< "    /~~   ~~\\" << std::endl
		<< " /~~         ~~\\" << std::endl
		<< "{               }" << std::endl
		<< " \\  _-     -_  /" << std::endl
		<< "   ~  \\\\ //  ~" << std::endl
		<< "_- -   | | _- _" << std::endl
		<< "  _ -  | |   -_" << std::endl
		<< "      // \\\\" << std::endl;
	file.close();
}
