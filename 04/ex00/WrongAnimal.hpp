/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:13:15 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 17:08:34 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string		_type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		virtual ~WrongAnimal( void );
		WrongAnimal( const WrongAnimal &wrongAnimalReference );
		WrongAnimal& operator=( WrongAnimal const &wrongAnimalReference );

		std::string const&	getType( void ) const;
		void				setType( std::string type );
		void				makeSound( void ) const;
};

#endif
