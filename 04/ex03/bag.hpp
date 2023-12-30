/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bag.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:56:02 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/15 20:37:29 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BAG_HPP
# define BAG_HPP

# include "AMateria.hpp"

typedef struct	s_bag
{
	AMateria*		materia;
	struct s_bag	*next;
}					t_bag;

void	showBag(t_bag *bag);
t_bag*	prepareBag( AMateria* type );
void	addMateriaToBag(t_bag **bag, t_bag *materia);
void	cleanBag(t_bag	*bag);

#endif
