/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 23:33:06 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 18:00:24 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap( "Default_clap_name" ), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << _name << " became a DiamondTrap 💎" << std::endl;
	this->showinfo();
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << this->_name << " stopped being a DiamondTrap 💎" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src)
{
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap ( name )
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << _name << " became a DiamondTrap 💎" << std::endl;
	this->showinfo();
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::showinfo( void )
{
	std::cout << "\001\e[0;36m\002";
	std::cout << "\t* Hitpoints: " << this->_hitPoints << std::endl;
	std::cout << "\t* Energy points: " << this->_energyPoints << std::endl;
	std::cout << "\t* Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "\001\e[0m\002";
}
