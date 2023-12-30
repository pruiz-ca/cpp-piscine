/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:04:19 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 20:42:01 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template< typename T >
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack( void ) {};
		virtual ~MutantStack( void ) {};
		MutantStack( MutantStack const& src ) { *this = src; };
		MutantStack&	operator=( MutantStack const& src ) { this->c = src.c; return *this; };

		typedef typename std::deque<T>::iterator iterator;
		iterator		begin( void ) { return std::stack<T, std::deque<T> >::c.begin(); }
		iterator		end ( void ) { return std::stack<T, std::deque<T> >::c.end(); }

		typedef typename std::deque<T>::reverse_iterator rev_iterator;
		rev_iterator	rbegin( void ) { return std::stack<T, std::deque<T> >::c.rbegin(); }
		rev_iterator	rend ( void ) { return std::stack<T, std::deque<T> >::c.rend(); }
};

#endif
