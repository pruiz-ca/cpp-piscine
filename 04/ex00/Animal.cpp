/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:16:03 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/13 19:10:53 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	return ;
}

Animal::~Animal( void )
{
	return ;
}

Animal::Animal( const Animal &animalRef )
{
	*this = animalRef;
}

Animal& Animal::operator=( Animal const &animalRef )
{
	if (this != &animalRef)
		this->_type = animalRef._type;
	return *this;
}

Animal::Animal( std::string type )
{
	_type = type;
}

std::string const&	Animal::getType( void ) const
{
	return this->_type;
}

void	Animal::setType( std::string type )
{
	_type = type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "<silence>" << std::endl;
}
