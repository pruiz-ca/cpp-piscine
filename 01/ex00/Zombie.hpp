/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:07:32 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/06 15:51:22 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:
		std::string _name;

	public:
		Zombie( std::string name );
		~Zombie( void );
		void		announce( void );
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif
