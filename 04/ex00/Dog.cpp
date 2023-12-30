/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:41:15 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 00:22:06 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "dog" )
{
	return ;
}

Dog::~Dog( void )
{
	return ;
}

Dog::Dog( const Dog &src ) : Animal( src )
{
	*this = src;
}

Dog&	Dog::operator=( Dog const &src )
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woooooof!" << std::endl;
}
