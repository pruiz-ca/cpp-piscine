/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 23:33:04 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:41:54 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		_name;

	public:
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( const DiamondTrap & src );
		DiamondTrap&	operator=( DiamondTrap const & src );

		DiamondTrap( std::string name );

		void	showinfo( void );
		void	whoAmI( void );
		using	ScavTrap::attack;
};

#endif
