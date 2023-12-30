/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:44:19 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 15:40:39 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << _name << " became a ScavTrap 👽" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << _name << " stopped being a ScavTrap 👽" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const & src )
{
	if (this != &src )
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << _name << " became a ScavTrap 👽" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		std::cout << "ScavTrap " << _name << " can't enter in gate keeper mode!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << _name << " have entered in gate keeper mode!" << std::endl;
	}
}

void	ScavTrap::attack( std::string const & target )
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is exhausted and can't attack "
			<< target << "!" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
		this->_energyPoints -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!"
		<< std::endl;
}
