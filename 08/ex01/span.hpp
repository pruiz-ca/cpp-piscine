/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:56:41 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/21 11:43:53 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_spanvector;
		unsigned int		_vectorsize;
		Span( void );

	public:
		Span( unsigned int N );
		virtual ~Span( void );
		Span(Span const &other);
		Span &operator=(Span const &other);

		std::vector<int>::iterator	getBegin( void );
		std::vector<int>::iterator	getEnd( void );
		std::vector<int>			getSpan( void );
		int							getSize( void );


		void			addNumber( int num );
		void			addNumberRange( std::vector<int>::iterator min, std::vector<int>::iterator max );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

	class AlreadyFull : public std::exception {
		const char* what() const throw() {
			return "Error adding number: List is full";
		}
	};

	class NotEnoughNumbers : public std::exception {
		const char* what() const throw() {
			return "Not enough numbers to calculate span";
		}
	};
};

#endif
