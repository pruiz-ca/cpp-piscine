/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:16:03 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:16:29 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	return ;
}

Animal::Animal( std::string type )
{
	this->_type = type;
}

Animal::~Animal( void )
{
	return ;
}

Animal::Animal( const Animal &src )
{
	this->_type = src._type;
}

Animal& Animal::operator=( Animal const &src )
{
	if (this != &src)
		this->_type = src.getType();
	return *this;
}

std::string const&	Animal::getType( void ) const
{
	return this->_type;
}

void	Animal::setType( std::string type )
{
	this->_type = type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "<silence>" << std::endl;
}
