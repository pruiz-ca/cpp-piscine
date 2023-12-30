/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:16:10 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 17:08:28 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		virtual ~WrongCat( void );
		WrongCat( const WrongCat &wrongCatRef );
		WrongCat& operator=( WrongCat const &wrongCatRef );

		void	makeSound( void ) const;
};

#endif
