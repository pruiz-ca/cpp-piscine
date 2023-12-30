/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 23:21:30 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:30:13 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << _name << " became a FragTrap 👾" << std::endl;
	this->showinfo();
}

FragTrap::~FragTrap()
{
	std::cout << _name << " stopped being a FragTrap 👾" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
}

FragTrap&	FragTrap::operator=( FragTrap const & src )
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

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << _name << " became a FragTrap 👾" << std::endl;
	this->showinfo();
}

void	FragTrap::highFivesGuys( void )
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		std::cout << "FragTrap " << _name << " can't request a positive high five!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << _name << " requested a positive high five!" << std::endl;
	}
}

void	FragTrap::attack( std::string const & target )
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is exhausted and can't attack "
			<< target << "!" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
		this->_energyPoints -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!"
		<< std::endl;
	this->showinfo();
}
