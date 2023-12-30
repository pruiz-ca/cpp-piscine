/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 14:47:17 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T>
void	rot13( T& item )
{
	if (item + 13 > 122)
		item = 97 + item + 13 - 122;
	else
		item += 13;
}

template< typename T>
void	rot13str( T& item )
{
	int		i = -1;

	while (item[++i])
	{
		if (item[i] + 13 > 122)
			item[i] = 97 + item[i] + 13 - 122;
		else
			item[i] += 13;
	}
}

int		main( void )
{
	int				intArray [4] = {1, 2, 3, 4};
	char			charArray [4] = {'h', 'o', 'l', 'a'};
	std::string		strArray [4] = {"hola", "que", "tal", "estas"};

	iter(intArray, 4, &rot13);
	iter(charArray, 4, &rot13);
	iter(strArray, 4, &rot13str);

	for (int i = 0; i < 4; i++)
		std::cout << intArray[i] << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << charArray[i] << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << strArray[i] << std::endl;

	return 0;
}
