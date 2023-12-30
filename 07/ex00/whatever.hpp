/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:34:04 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/20 12:41:08 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T>
T const&	max( T const &x, T const &y)
{
	return ( x >= y ? x : y );
}

template< typename T>
T const&	min( T const &x, T const &y)
{
	return ( x <= y ? x : y );
}

template< typename T>
void	swap( T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif
