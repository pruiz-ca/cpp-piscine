/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:44:04 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 19:14:38 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure::Cure( Cure const &src )
{
	*this = src;
}

Cure&	Cure::operator=( Cure const &src )
{
	this->_type = src._type;
	return *this;
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone( void ) const
{
	AMateria*	clonedMateria = new Cure(*this);
	return clonedMateria;
}

