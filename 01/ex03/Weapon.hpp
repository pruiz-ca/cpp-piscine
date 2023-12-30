/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:25:42 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:26:15 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
	private:
		std::string		_type;

	public:
		Weapon ( void );
		~Weapon( void );
		Weapon( std::string type );

		std::string const&	getType( void );
		void				setType( std::string type );
};

#endif
