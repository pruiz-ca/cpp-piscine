/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 11:13:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 00:04:25 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"
# include "Contact.hpp"

class Phonebook {
	public:
		Phonebook( void );
		~Phonebook( void );

		void addContact( void );
		void contactSearch( void );

	private:
		int		size;
		int		slot;
		Contact	contact[8];
};

#endif
