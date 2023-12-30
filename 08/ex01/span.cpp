/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:56:43 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/21 11:50:17 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void )
{
	_vectorsize = 0;
	_spanvector.assign(0, 0);
}

Span::Span( unsigned int N )
{
	_vectorsize = N;
	_spanvector.reserve(N);
}

Span::~Span( void )
{
	return ;
}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->_vectorsize = other._vectorsize;
		this->_spanvector = other._spanvector;
	}
	return *this;
}

void	Span::addNumber( int num )
{
	if (this->_spanvector.size() >= this->_vectorsize)
		throw AlreadyFull();
	this->_spanvector.push_back(num);
}

void			Span::addNumberRange( std::vector<int>::iterator first, std::vector<int>::iterator last )
{
	srand(time(NULL));
	while (first++ != last)
		this->addNumber(rand());
}

unsigned int	Span::shortestSpan( void )
{
	std::vector<int>	tmp(this->_spanvector);
	int					shortest = -1;
	int					span;

	if (this->_spanvector.size() <= 1)
		throw Span::NotEnoughNumbers();
	for (unsigned long i = 0; i < this->_spanvector.size() - 1; i++)
	{
		for (unsigned long j = i + 1; j < this->_spanvector.size(); j++)
		{
			if (tmp[j] > tmp[i])
				span = tmp[j] - tmp[i];
			else
				span = tmp[i] - tmp[j];
			if (span < shortest || shortest == -1)
				shortest = span;
		}
	}
	return shortest;
}

unsigned int	Span::longestSpan( void )
{
	int		max;
	int		min;

	if (this->_spanvector.size() <= 1)
		throw Span::NotEnoughNumbers();
	max = *(std::max_element(this->_spanvector.begin(), this->_spanvector.end()));
	min = *(std::min_element(this->_spanvector.begin(), this->_spanvector.end()));
	return (max - min);
}

std::vector<int>::iterator	Span::getBegin( void )
{
	return this->_spanvector.begin();
}

std::vector<int>::iterator	Span::getEnd( void )
{
	return this->_spanvector.end();
}

std::vector<int>	Span::getSpan( void )
{
	return this->_spanvector;
}

int	Span::getSize( void )
{
	return this->_vectorsize;
}
