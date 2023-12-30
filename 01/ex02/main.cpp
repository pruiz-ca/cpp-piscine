/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:34:25 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/06 16:49:51 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main ( void )
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address in memory of string: " << &str << std::endl;
	std::cout << "String address using stringPTR: " << stringPTR << std::endl;
	std::cout << "String address using stringREF: " << &stringREF << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "String using stringPTR: " << *stringPTR << std::endl;
	std::cout << "String using stringREF: " << stringREF << std::endl;
	return 0;
}
