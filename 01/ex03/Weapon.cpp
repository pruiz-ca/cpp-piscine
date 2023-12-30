/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:37:57 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:26:31 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

Weapon::Weapon( std::string type )
{
	_type = type;
}

std::string const&	Weapon::getType( void )
{
	return (_type);
}

void	Weapon::setType( std::string type )
{
	_type = type;
}
