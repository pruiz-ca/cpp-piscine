/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 14:54:45 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/02 19:46:10 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	print_formatedfield(std::string str)
{
	if (str.size() > 10)
	{
		std::cout << std::setw(9);
		std::cout << str.substr(0, 9) << ".";
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
}

void	intro(void)
{
	system("clear");
	std::cout << CYN << "\t\t// WELCOME TO PHONEBOOK 📞📖 \\\\" << std::endl;
	std::cout << CYN << "\t      Commands allowed -> ADD/SEARCH/EXIT";
	std::cout << std::endl;
	std::cout << "         ---------------------------------------------";
	std::cout << std::endl;
}

int	main(void)
{
	std::string		input;
	Phonebook		phonebook;

	intro();
	while (1)
	{
		std::cout << YEL << "phonebook> " << NOCOL;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.contactSearch();
		else if (!input.compare("EXIT"))
			break ;
		else
			std::cout << "Commands allowed: ADD/SEARCH/EXIT" << std::endl;
	}
	std::cout << "Exiting Phonebook 👋" << std::endl;
	exit (0);
}
