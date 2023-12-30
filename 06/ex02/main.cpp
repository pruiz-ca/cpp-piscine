/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 12:34:12 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base*	generate( void )
{
	Base*	ret;
	int		randomNumber;

	srand(time(NULL));
	randomNumber = rand() % 30 + 1;
	if (randomNumber <= 10)
		ret = new A;
	else if (randomNumber <= 20)
		ret = new B;
	else
		ret = new C;
	return ret;
}

void	identify( Base* p )
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void	identify( Base& p )
{
	try {
		A& refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e) {}

	try {
		B& refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e) {}

	try {
		C& refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "C" << std::endl;
	}
	catch (std::exception& e) {}
}

int		main( void )
{
	Base*	randomBase;
	Base*	test1 = new C;
	Base*	test2 = new A;
	Base*	test3 = new B;

	std::cout << "===== * C A B =====" << std::endl;
	identify(test1);
	identify(test2);
	identify(test3);

	std::cout << std::endl << "===== * Random =====" << std::endl;
	randomBase = generate();
	identify(randomBase);


	Base&	test4 = *test1;
	Base&	test5 = *test2;
	Base&	test6 = *test3;

	std::cout << std::endl << "===== & C A B =====" << std::endl;
	identify(test4);
	identify(test5);
	identify(test6);
	std::cout << std::endl << "===== & Random =====" << std::endl;

	Base&	randomBaseRef = *randomBase;

	identify(randomBaseRef);

	delete test1;
	delete test2;
	delete test3;
	delete randomBase;

	return 0;
}
