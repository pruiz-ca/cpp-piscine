/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:44:20 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 15:58:30 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
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
