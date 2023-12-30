/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:16:44 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:48:20 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_spellBook[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		if (this->_spellBook[i])
			delete this->_spellBook[i];
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
	*this = src;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const &src )
{
	if (this != &src)
		for (int i = 0; i < 4; i++)
			this->_spellBook[i] = src._spellBook[i];
	return *this;
}

void			MateriaSource::learnMateria(AMateria *materia )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_spellBook[i] == NULL)
		{
			std::cout << "Materia type [" << materia->getType() << "] learned" << std::endl;
			this->_spellBook[i] = materia;
			return ;
		}
	}
	std::cout << "Spellbook is full" << std::endl;
	delete materia;
}

AMateria*		MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_spellBook[i] && this->_spellBook[i]->getType() == type)
		{
			std::cout << "Materia type [" << type << "] cloned" << std::endl;
			return this->_spellBook[i]->clone();
		}
	}
	std::cout << "Materia type [" << type << "] doesn't exist" << std::endl;
	return 0;
}
