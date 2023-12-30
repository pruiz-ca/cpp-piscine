/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:56:36 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 18:47:06 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return 1;
	}
	Scalar	input(argv[1]);
	input.toChar();
	input.toInt();
	input.toFloat();
	input.toDouble();

	return 0;
}
