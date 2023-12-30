/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:44:20 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:42:34 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int		_energyPoints;

	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( const ScavTrap & src );
		ScavTrap&	operator=( ScavTrap const & src );

		ScavTrap( std::string name );

		void		attack( std::string const & target );
		void		guardGate( void );
};

#endif
