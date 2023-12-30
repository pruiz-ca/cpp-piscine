/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:33:47 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 19:17:52 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_spellBook[4];

	public:
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( MateriaSource const &src );
		MateriaSource&	operator=( MateriaSource const &src );

		void			learnMateria(AMateria *materia );
		AMateria*		createMateria( std::string const &type );
};

#endif
