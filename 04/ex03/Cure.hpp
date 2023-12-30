/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:33:26 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:28:31 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const &src );
		Cure&		operator=( Cure const &src );

		void		use( ICharacter& target );
		AMateria*	clone( void ) const;
};

#endif
