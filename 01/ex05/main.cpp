/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 00:17:49 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/22 11:49:01 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main ( void )
{
	Karen	karen;

	karen.complain("hola");
	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	return 0;
}
