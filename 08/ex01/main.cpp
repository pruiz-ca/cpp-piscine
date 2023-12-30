/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:22:21 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 18:30:40 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main( void )
{
	Span sp = Span(5);

	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try {
		std::cout << "Short span: " << sp.shortestSpan() << std::endl;
		std::cout << "Long span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }


	std::cout << std::endl << "===== RANGE =====" << std::endl;
	Span hugeSp = Span(10);
	std::vector<int>::iterator	begin = hugeSp.getBegin();
	std::vector<int>::iterator	end = begin + hugeSp.getSize();

	try
	{
		hugeSp.addNumberRange(begin, end);

		for (unsigned long i = 0; i < hugeSp.getSpan().size(); i++)
			std::cout << hugeSp.getSpan()[i] << " ";

		std::cout << std::endl;
		std::cout << "Short span: " << hugeSp.shortestSpan() << std::endl;
		std::cout << "Long span: " << hugeSp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
