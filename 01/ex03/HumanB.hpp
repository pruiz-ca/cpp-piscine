/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:53:32 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/06 21:13:26 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& weapon );
};

#endif
