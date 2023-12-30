/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:00:08 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:23:55 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name)
{
	Zombie*			Horde;

	if (N < 0)
		return NULL;
	Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].setName(name + std::to_string(i + 1));
	return Horde;
}
