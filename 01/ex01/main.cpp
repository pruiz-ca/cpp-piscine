/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:07:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/06 16:33:00 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie*		Horde;
	int			i;

	Horde = zombieHorde(42, "Pepe");
	for (i = 0; i < 42; i++)
		Horde[i].announce();
	delete [] Horde;
	return 0;
}
