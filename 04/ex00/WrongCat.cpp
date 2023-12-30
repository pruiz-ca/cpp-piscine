/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:40:41 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/13 01:18:56 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
	return ;
}

WrongCat::~WrongCat( void )
{
	return ;
}

WrongCat::WrongCat( const WrongCat &wrongCatRef)
{
	*this = wrongCatRef;
}

WrongCat&	WrongCat::operator=( WrongCat const &wrongCatRef )
{
	if (this != &wrongCatRef)
		this->_type = wrongCatRef.getType();
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaaaau" << std::endl;
}
