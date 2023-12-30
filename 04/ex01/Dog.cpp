/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:41:15 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:03:17 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "dog" )
{
	std::cout << "Dog created!" << std::endl;
	_brain = new Brain();
}

Dog::~Dog( void )
{
	delete _brain;
	std::cout << "Dog destroyed!" << std::endl;
}

Dog::Dog( const Dog & src ) : Animal( src )
{
	std::cout << "Dog copied!" << std::endl;
	if (this != &src)
		this->_brain = new Brain(*src._brain);
}

Dog&	Dog::operator=( Dog const &src )
{
	std::cout << "Dog =copied!" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woooooof!" << std::endl;
}

Brain*	Dog::getBrain( void ) const
{
	return this->_brain;
}
