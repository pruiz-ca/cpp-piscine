/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:16:03 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/13 01:13:47 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	return ;
}

WrongAnimal::WrongAnimal( std::string type )
{
	_type = type;
}

WrongAnimal::~WrongAnimal( void )
{
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wrongAnimalRef)
{
	*this = wrongAnimalRef;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const &wrongAnimalRef)
{
	if (this != &wrongAnimalRef)
		this->_type = wrongAnimalRef.getType();
	return *this;
}

std::string const&	WrongAnimal::getType( void ) const
{
	return this->_type;
}

void	WrongAnimal::setType( std::string type )
{
	_type = type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::string		sound;

	sound = "<silence>";
	if (_type == "cat")
		sound = "Miaaau";
	else if (_type == "dog")
		sound = "Woooof!";
	std::cout << sound << std::endl;
}
