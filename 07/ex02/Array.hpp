/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:21:45 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/27 12:16:46 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T>
class Array
{
	private:
		T*		_element;
		int		_size;

	public:
		virtual ~Array( void )
		{
			if (this->_element)
				delete [] this->_element;
		}

		Array( void ) {
			this->_element = NULL;
			this->_size = 0;
		}

		Array( unsigned int elements ) {
			this->_element = new T[elements];
			this->_size = elements;
			for (int i = 0; i < this->size(); i++)
				this->_element[i] = 0;
		}

		Array(Array const &other) {
			this->_size = other._size;
			this->_element = new T[other._size];
			for (int i = 0; i < this->_size; i++)
				this->element[i] = other._element[i];
		}

		Array &operator=(Array const &other)
		{
			if (this != &other)
			{
				if (this->_element)
					delete [] this->_element;
				this->_size = other._size;
				this->_element = new T[this->_size];
				for (int i = 0; i < this->_size; i++)
					this->_element[i] = other._element[i];
			}
			return *this;
		}

		T	&operator[]( int idx )
		{
			if (idx < 0 || idx >= this->size())
				throw OutOfLimits();
			return this->_element[idx];
		}

		T	operator[]( int idx ) const
		{
			if (idx < 0 || idx >= this->size())
				throw OutOfLimits();
			return this->_element[idx];
		}

		int		size( void ) const {
			return this->_size;
		}

		class OutOfLimits : public std::exception {
			const char*	what() const throw() {
				return "Element is out of limits";
			}
		};
};

template< typename T>
std::ostream&	operator<<( std::ostream &output, Array<T> const &array )
{
	output << "{";
	for (int i = 0; i < array.size(); i++)
	{
		if (i != array.size() - 1)
			output << array[i] << ", ";
		else
			output << array[i];
	}
		output << "}";
	return output;
}

#endif
