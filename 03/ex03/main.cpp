/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:21:51 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/09/11 21:31:29 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main( void )
{
	DiamondTrap paco;

	paco.attack("Manolo");
	paco.whoAmI();

	std::cout << std::endl << "=====" << std::endl;

	DiamondTrap pepe("Pepe");
	pepe.attack("Manolo");
	pepe.whoAmI();

	std::cout << std::endl << "=====" << std::endl;
}
