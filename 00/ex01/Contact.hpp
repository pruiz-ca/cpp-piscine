/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 14:51:50 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/21 23:45:33 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class Contact {
	private:
		std::string	_index;
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;

	public:
		Contact( void );
		~Contact( void );
		std::string getIndex( void );
		std::string getFirstName( void );
		std::string getLastName( void );
		std::string getNickName( void );
		std::string getPhoneNumber( void );
		std::string getDarkestSecret( void );
		void setIndex( std::string index );
		void setFirstName( std::string firstname );
		void setLastName( std::string lastname );
		void setNickName( std::string nickname );
		void setPhoneNumber( std::string phonenumber );
		void setDarkestSecret( std::string darkestsecret );
};

#endif
