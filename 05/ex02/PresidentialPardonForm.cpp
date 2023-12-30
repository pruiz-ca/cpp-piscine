/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:26:39 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:16:29 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("presidential", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

void	PresidentialPardonForm::executeSpecific( void ) const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
