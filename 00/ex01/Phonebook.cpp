/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 13:15:23 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 00:04:41 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void )
{
	this->slot = 0;
	this->size = 0;
}

Phonebook::~Phonebook( void )
{
	return ;
}

void	Phonebook::addContact( void )
{
	std::string		input;

	if (this->slot == 8)
	{
		this->slot = 0;
		std::cout << CYN << "Your Phonebook has reached its maximum capacity.";
		std::cout << std::endl;
		std::cout << "From now on all your contacts will be overwritten.";
		std::cout << NOCOL << std::endl;
	}
	this->contact[slot].setIndex(std::to_string(slot));
	std::cout << "Input First name: ";
	std::getline(std::cin, input);
	this->contact[slot].setFirstName(input);
	std::cout << "Input Last name: ";
	std::getline(std::cin, input);
	this->contact[slot].setLastName(input);
	std::cout << "Input Nickname: ";
	std::getline(std::cin, input);
	this->contact[slot].setNickName(input);
	std::cout << "Input Phone number: ";
	std::getline(std::cin, input);
	this->contact[slot].setPhoneNumber(input);
	std::cout << "Input Darkest secret: ";
	std::getline(std::cin, input);
	this->contact[slot].setDarkestSecret(input);
	std::cout << CYN << this->contact[slot].getFirstName() <<  " added to ";
	std::cout <<  "slot " << this->contact[slot].getIndex() << std::endl << NOCOL;
	this->slot++;
	if (this->size < 8)
		this->size++;
}

void	Phonebook::contactSearch( void )
{
	int			i;
	std::string	input;

	std::cout << "     index|first name| last name|  nickname";
	std::cout << std::endl;
	i = -1;
	while (++i < this->size)
	{
		print_formatedfield(this->contact[i].getIndex());
		std::cout << "|";
		print_formatedfield(this->contact[i].getFirstName());
		std::cout << "|";
		print_formatedfield(this->contact[i].getLastName());
		std::cout << "|";
		print_formatedfield(this->contact[i].getNickName());
		std::cout << std::endl;
	}
	i = -1;
	std::cout << CYN << "searchindex: " << NOCOL;
	std::getline(std::cin, input);
	while (++i < this->size)
	{
		if (input == std::to_string(i))
		{
			std::cout << "First name: " << this->contact[i].getFirstName() << std::endl;
			std::cout << "Last name: " << this->contact[i].getLastName() << std::endl;
			std::cout << "Nickname: " << this->contact[i].getNickName() << std::endl;
			std::cout << "Phone number: " << this->contact[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->contact[i].getDarkestSecret() << std::endl;
			return ;
		}
	}
	std::cout << CYN << "Contact not found." << NOCOL << std::endl;
}
