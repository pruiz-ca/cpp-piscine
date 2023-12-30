/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:53:32 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/06 20:59:52 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );
};

#endif
