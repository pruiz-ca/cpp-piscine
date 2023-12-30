/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:17:35 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 21:04:37 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat &catReference );
		Cat& operator=( Cat const &catReference );

		Brain*		getBrain( void ) const;
		void		makeSound( void ) const;
};

#endif
