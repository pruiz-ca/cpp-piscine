/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 20:42:39 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main( void )
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Popped: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);

	std::cout << std::endl << "=====" << std::endl;

	MutantStack<std::string>	strstack;

	strstack.push("Hola");
	strstack.push("Adios");

	std::cout << "Popped: " << strstack.top() << std::endl;

	strstack.pop();

	strstack.push("que");
	strstack.push("tal");
	strstack.push("estas");

	MutantStack<std::string>::iterator	strit = strstack.begin();
	MutantStack<std::string>::iterator	strite = strstack.end();

	++strit;
	--strit;

	int		i;
	i = 0;
	while(strit != strite)
	{
		std::cout << "[" << i << "]" << *strit << std::endl;
		++strit;
		i++;
	}
	std::cout << "Size of stack: " << strstack.size() << std::endl;

	return 0;
}
