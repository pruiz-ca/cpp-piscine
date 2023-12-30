/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:07:32 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:17:48 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:
		std::string _name;

	public:
		Zombie( void );
		~Zombie( void );
		Zombie( std::string name );

		void		announce( void );
		void		setName( std::string name );
};

Zombie*		zombieHorde(int N, std::string name);

#endif
