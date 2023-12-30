/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:59:59 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 11:39:27 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain created!" << std::endl;
	for (int i = 0; i < 97; i += 0)
	{
		this->_ideas[i++] = "🍖";
		this->_ideas[i++] = "💤";
		this->_ideas[i++] = "🎾";
	}
}

Brain::~Brain( void )
{
	std::cout << "Brain destroyed!" << std::endl;
}

Brain::Brain( const Brain &src )
{
	std::cout << "Brain copied!" << std::endl;
	*this = src;
}

Brain&	Brain::operator=( Brain const &src )
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return *this;
}

std::string		Brain::getIdea( int i ) const
{
	return this->_ideas[i];
}

void			Brain::setIdea( int i, std::string const idea )
{
	this->_ideas[i] = idea;
}
