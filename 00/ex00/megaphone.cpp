/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:34:09 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/07/31 20:04:23 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_uppercase(char *str)
{
	int	i = -1;

	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv[++i])
		std::cout << ft_uppercase(argv[i]);
	std::cout << "\n";
	return (0);
}
