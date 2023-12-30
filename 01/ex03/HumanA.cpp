/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:34:31 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/06 21:01:25 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack ( void )
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
