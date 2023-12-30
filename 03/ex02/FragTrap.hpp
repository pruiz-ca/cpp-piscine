/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 23:13:23 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 15:58:41 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
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
