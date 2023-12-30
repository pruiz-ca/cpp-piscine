/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 00:17:49 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/07 01:33:10 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main ( int argc, char** argv )
{
	Karen	karen;

	if (argc != 2)
		return 1;
	karen.filter(argv[1]);
	return 0;
}
