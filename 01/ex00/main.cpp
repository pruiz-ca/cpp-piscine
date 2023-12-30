/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:07:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:14:46 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie*	emilson;

	emilson = newZombie("Emilson");
	emilson->announce();
	delete emilson;

	randomChump("Pepe");
	randomChump("Pepe2");
	randomChump("Pepe3");

	return 0;
}
