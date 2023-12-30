/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:33:26 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:28:55 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const &src );
		Ice&		operator=( Ice const &src );

		void		use( ICharacter& target );
		AMateria*	clone( void ) const;
};

#endif
