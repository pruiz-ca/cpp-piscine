/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:13:15 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:23:48 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
		Animal( void );

	protected:
		std::string		_type;

	public:
		Animal( std::string type );
		virtual ~Animal( void );
		Animal( Animal const &src );
		Animal& operator=( Animal const &src );

		std::string const&	getType( void ) const;
		void				setType( std::string type );
		virtual void		makeSound( void ) const;
};

#endif
