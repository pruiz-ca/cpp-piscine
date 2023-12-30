/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:13:17 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/09/20 13:31:19 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iostream>

class Scalar
{
	private:
		std::string	_value;

	public:
		Scalar( void );
		Scalar( std::string const argv );
		virtual ~Scalar( void );
		Scalar( Scalar const &other );
		Scalar &operator=( Scalar const &other );

		void	toChar( void );
		void	toInt( void );
		void	toFloat( void );
		void	toDouble( void );
};

#endif
