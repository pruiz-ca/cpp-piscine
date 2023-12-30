/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 16:28:30 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main( void )
{
	FragTrap paco;

	paco.attack("Manolo");
	paco.takeDamage(5);
	paco.beRepaired(3);
	paco.highFivesGuys();

	std::cout << std::endl << "=====" << std::endl;

	FragTrap pepe("Pepe");

	pepe.attack("Manolo");
	pepe.takeDamage(5);
	pepe.beRepaired(3);
	pepe.highFivesGuys();

	std::cout << std::endl << "=====" << std::endl;
}
