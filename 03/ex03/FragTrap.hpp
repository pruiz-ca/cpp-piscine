/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 23:13:23 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:42:27 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		int		_hitPoints;
		int		_attackDamage;

	public:
		FragTrap( void );
		~FragTrap( void );
		FragTrap( const FragTrap & src );
		FragTrap&	operator=( FragTrap const & src );

		FragTrap( std::string name );

		void	attack( std::string const & target );
		void	highFivesGuys( void );
};

#endif
