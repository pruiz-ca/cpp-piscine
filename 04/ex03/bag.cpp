/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bag.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:55:37 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/25 18:30:02 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bag.hpp"

void	showBag(t_bag *bag)
{
	std::cout << "🎒: ";
	while (bag->materia)
	{
		std::cout << "[" << bag->materia->getType() << "]";
		if (!bag->next)
		{
			std::cout << std::endl;
			return ;
		}
		std::cout << ", ";
		bag = bag->next;
	}
	std::cout << std::endl;
}

t_bag*	prepareBag( AMateria* type )
{
	t_bag*	slot = new t_bag;

	slot->materia = type;
	slot->next = NULL;
	return slot;
}

void	cleanBag(t_bag	*bag)
{
	t_bag	*tmp;

	while(bag)
	{
		tmp = bag->next;
		bag->next = NULL;
		delete bag->materia;
		delete bag;
		bag = tmp;
	}
}

void	addMateriaToBag(t_bag **bag, t_bag *materia)
{
	t_bag	*tmp;

	if (*bag == NULL)
		*bag = materia;
	else
	{
		tmp = *bag;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = materia;
	}
}
