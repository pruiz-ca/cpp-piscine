/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:40:41 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:02:00 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "cat" )
{
	std::cout << "Cat created!" << std::endl;
	_brain = new Brain();
}

Cat::~Cat( void )
{
	delete _brain;
	std::cout << "Cat destroyed!" << std::endl;
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Cat copied!" << std::endl;
	if (this != &src)
		this->_brain = new Brain(*src._brain);
}

Cat&	Cat::operator=( Cat const & src )
{
	std::cout << "Cat =copied!" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaau" << std::endl;
}

Brain*	Cat::getBrain( void ) const
{
	return this->_brain;
}
