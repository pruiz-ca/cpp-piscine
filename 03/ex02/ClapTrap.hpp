/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:47 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 13:05:01 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const& rhs );
		ClapTrap&	operator=( ClapTrap const & rhs );

		void	showinfo( void );
		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
