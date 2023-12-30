/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:31:37 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 17:55:28 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <algorithm>

class NotFound : public std::exception
{
	const char*	what() const throw()
	{
		return "Element not found";
	}
};

template< typename T>
int&	easyfind( T container, int num )
{
	typename T::iterator found;

	found = std::find(container.begin(), container.end(), num);
	if (found != container.end())
		return (*found);
	else
		throw NotFound();
}

#endif
