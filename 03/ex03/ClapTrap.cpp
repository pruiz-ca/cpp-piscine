/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:52 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 15:20:19 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = "Default";
	std::cout << this->_name << " appeared!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " left!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap & src )
{
	std::cout << "= operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap( std::string name ) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = name;
	std::cout << this->_name << " appeared!" << std::endl;
}

void	ClapTrap::attack( std::string const & target )
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is exhausted and can't attack "
			<< target << "!" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
		this->_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!"
		<< std::endl;
	this->showinfo();
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has been already defeated!"
			<< std::endl;
		this->showinfo();
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " has been hit, took "
			<< amount << " points of damage and died!"
			<< std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has been hit and took "
			<< amount << " points of damage!"
			<< std::endl;
	}
	this->showinfo();
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and can't regain any points!"
			<< std::endl;
		this->showinfo();
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is exhausted and can't regain any points!"
			<< std::endl;
		return ;
	}
	this->_hitPoints += amount;
	if (this->_energyPoints > 0)
		this->_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name << " regained "
		<< amount << " points!"
		<< std::endl;
	this->showinfo();
}

void	ClapTrap::showinfo( void )
{
	std::cout << "\001\e[0;36m\002";
	std::cout << "\t* Hitpoints: " << this->_hitPoints << std::endl;
	std::cout << "\t* Energy points: " << this->_energyPoints << std::endl;
	std::cout << "\t* Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "\001\e[0m\002";
}
