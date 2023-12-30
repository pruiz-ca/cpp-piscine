/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:02:28 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 17:09:03 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( std::string const &type )
{
	this->_type = type;
	std::cout << "Materia type [" << this->_type << "] created" << std::endl;
	return ;
}

AMateria::~AMateria( void )
{
	std::cout << "Materia type [" << this->_type << "] destroyed" << std::endl;
	return ;
}

AMateria::AMateria( AMateria const &src )
{
	this->_type = src._type;
}

AMateria&	AMateria::operator=( AMateria const &src )
{
	(void)src;
	return *this;
}

std::string const&	AMateria::getType( void ) const
{
	return this->_type;
}

void	AMateria::use( ICharacter& target )
{
	(void)target;
	return ;
}
