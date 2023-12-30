/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:40:41 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 00:22:31 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "cat" )
{
	return ;
}

Cat::~Cat( void )
{
	return ;
}

Cat::Cat( const Cat &src ) : Animal( src )
{
	*this = src;
}

Cat& Cat::operator=( Cat const &src )
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaau" << std::endl;
}
