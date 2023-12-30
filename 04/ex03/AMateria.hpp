/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 02:24:14 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 12:33:34 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		AMateria( void );
		std::string		_type;

	public:
		AMateria( std::string const &type );
		virtual ~AMateria( void );
		AMateria( AMateria const &ref );
		AMateria&	operator=( AMateria const &src );

		std::string const&	getType( void ) const; //Returns the materia type
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );
};

#endif
