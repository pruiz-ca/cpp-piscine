/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:17:43 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 21:04:12 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog &dogReference );
		Dog& operator=( Dog const &dogReference );

		Brain*		getBrain( void ) const;
		void		makeSound( void ) const;
};

#endif
