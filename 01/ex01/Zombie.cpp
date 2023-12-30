/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:07:30 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:18:29 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "<" << this->_name << "> 💀" << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	return ;
}

void	Zombie::announce ( void )
{
	std::cout << "<" << this->_name << "> 🧟 BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName ( std::string name )
{
	this->_name = name;
}
