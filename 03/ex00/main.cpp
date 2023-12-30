/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:17:13 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main( void )
{
	ClapTrap paco;

	paco.attack("Manolo");
	paco.takeDamage(5);
	paco.beRepaired(3);

	std::cout << std::endl << "=====" << std::endl;

	ClapTrap pepe("Pepe");

	pepe.attack("Manolo");
	pepe.takeDamage(5);
	pepe.beRepaired(3);

	std::cout << std::endl << "=====" << std::endl;
}
