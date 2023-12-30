/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:47:27 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/13 13:38:43 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &fixedPoint );
		Fixed&			operator=( Fixed const &fixedPoint );

		Fixed( int const num );
		Fixed( float const num );

		int				getRawBits ( void ) const;
		void			setRawBits ( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
};

std::ostream&	operator<<( std::ostream& os, Fixed const &fixedPoint );

#endif
