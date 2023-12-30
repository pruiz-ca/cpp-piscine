/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:22:35 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 20:08:31 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	this->_bag = NULL;
	return ;
}

Character::Character( std::string name )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_bag = NULL;
	this->_name = name;
	std::cout << "Character " << this->_name << " joined" << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	cleanBag(this->_bag);
	std::cout << "Character " << this->_name << " has died" << std::endl;
	return ;
}

Character::Character( Character const &src ) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_bag = NULL;
}

Character&	Character::operator=( Character const &src )
{
	if (this != &src)
	{
		cleanBag(this->_bag);
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
		this->_name = src._name;
	}
	this->_bag = NULL;
	return *this;
}

std::string const& Character::getName( void ) const
{
	return this->_name;
}

void Character::equip( AMateria* m )
{
	if (!m)
	{
		std::cout << "Can't equip materia that doesn't exist" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			std::cout << "Materia type [" << m->getType() << "] equipped" << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "There are already 4 materias equipped" << std::endl;
}

void Character::unequip( int idx )
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << "There's no materia in that slot" << std::endl;
		return ;
	}
	std::cout << "Materia type [" << _inventory[idx]->getType() << "] unequipped" << std::endl;
	addMateriaToBag(&this->_bag, prepareBag(this->_inventory[idx]));
	this->_inventory[idx] = NULL;
	showBag(this->_bag);
}

void Character::use( int idx, ICharacter& target )
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << "* no materia *" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
