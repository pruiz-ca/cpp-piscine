/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:47:27 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 12:02:43 by pruiz-ca         ###   ########.fr       */
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

		bool			operator>( Fixed const& f1 ) const;
		bool			operator<( Fixed const& f1 ) const;
		bool			operator>=( Fixed const& f1 ) const;
		bool			operator<=( Fixed const& f1 ) const;
		bool			operator==( Fixed const& f1 ) const;
		bool			operator!=( Fixed const& f1 ) const;

		float			operator*( Fixed const& f1 );
		float			operator/( Fixed const& f1 );
		float			operator+( Fixed const& f1 );
		float			operator-( Fixed const& f1 );

		Fixed			operator++( int );
		Fixed			operator--( int );
		Fixed			operator++( void );
		Fixed			operator--( void );

		static Fixed const&		max( Fixed const& f1, Fixed const& f2 );
		static Fixed const&		min( Fixed const& f1, Fixed const& f2 );
};

std::ostream&	operator<<( std::ostream& os, Fixed const &fixedPoint );

#endif
