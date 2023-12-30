/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:13:15 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 17:07:24 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string		_type;

	public:
		Animal( void );
		Animal( std::string type );
		virtual ~Animal( void );
		Animal( const Animal &animalReference );
		Animal& operator=( Animal const &animalReference );

		std::string const&	getType( void ) const;
		void				setType( std::string type );
		virtual void		makeSound( void ) const;
};

#endif
