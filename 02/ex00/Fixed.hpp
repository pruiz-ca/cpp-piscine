/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:47:27 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 11:06:49 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &fixedPoint );
		Fixed&	operator=( Fixed const &fixedPoint );

		int				getRawBits ( void ) const;
		void			setRawBits ( int const raw );
};

#endif
