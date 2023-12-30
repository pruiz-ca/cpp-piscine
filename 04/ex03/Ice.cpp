/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:45:50 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 17:58:39 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice::Ice( Ice const &src )
{
	*this = src;
}

Ice&	Ice::operator=( Ice const &src )
{
	this->_type = src._type;
	return *this;
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone( void ) const
{
	AMateria*	clonedMateria = new Ice(*this);
	return clonedMateria;
}
