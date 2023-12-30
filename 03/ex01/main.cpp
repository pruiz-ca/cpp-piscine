/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:17:28 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void )
{
	ScavTrap paco;

	paco.attack("Manolo");
	paco.guardGate();
	paco.takeDamage(5);
	paco.beRepaired(3);

	std::cout << std::endl << "=====" << std::endl;

	ScavTrap pepe("Pepe");

	pepe.attack("Manolo");
	pepe.guardGate();
	pepe.takeDamage(5);
	pepe.beRepaired(3);

	std::cout << std::endl << "=====" << std::endl;
}
