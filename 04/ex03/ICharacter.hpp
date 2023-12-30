/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:49:30 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 18:34:04 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter( void ) {};
		virtual std::string const& getName( void ) const = 0;
		virtual void equip( AMateria* m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter& target ) = 0;
};

#endif
