/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:49:30 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 20:18:00 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "bag.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria*	_inventory[4];
		t_bag*		_bag;
		std::string	_name;
		Character( void );

	public:
		~Character( void );
		Character( std::string name );
		Character( Character const &src );
		Character&	operator=( Character const &src );
		std::string const& getName( void ) const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
};

#endif
