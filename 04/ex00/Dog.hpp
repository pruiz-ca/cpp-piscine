/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:17:43 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 17:07:18 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		virtual ~Dog( void );
		Dog( const Dog &dogReference );
		Dog& operator=( Dog const &dogReference );

		void		makeSound( void ) const;
};

#endif
