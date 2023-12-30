/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:34:31 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:33:35 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	_name = name;
	_weapon = nullptr;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	_weapon = &weapon;
}

void	HumanB::attack ( void )
{
	if (this->_weapon == nullptr)
		std::cout << _name << " has no weapon" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
