/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:43:00 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/20 13:11:10 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T>
void	iter( T* array, int len, void f(T& arrayElement) )
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif
