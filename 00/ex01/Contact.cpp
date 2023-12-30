/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:05:03 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/21 23:47:47 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	return ;
}

Contact::~Contact( void )
{
	return ;
}

std::string Contact::getIndex( void ) { return this->_index; }
std::string Contact::getFirstName( void ) {	return this->_firstname; }
std::string Contact::getLastName( void ) { return this->_lastname; }
std::string Contact::getNickName( void ) { return this->_nickname; }
std::string Contact::getPhoneNumber( void ) { return this->_phonenumber; }
std::string Contact::getDarkestSecret( void ) { return this->_darkestsecret; }

void Contact::setIndex( std::string index ) { this->_index = index; }
void Contact::setFirstName( std::string firstname ) { this->_firstname = firstname; }
void Contact::setLastName( std::string lastname ) { this->_lastname = lastname; }
void Contact::setNickName( std::string nickname ) { this->_nickname = nickname; }
void Contact::setPhoneNumber( std::string phonenumber ) { this->_phonenumber = phonenumber; }
void Contact::setDarkestSecret( std::string darkestsecret ) { this->_darkestsecret = darkestsecret; }
