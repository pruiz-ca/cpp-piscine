/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:18:14 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/23 13:02:39 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const _y;

	public:
		Point( void );
		Point( float const x, float const y );
		virtual ~Point( void );
		Point(Point const &other);
		Point &operator=(Point const &other);

		Fixed const&		getX( void ) const;
		Fixed const&		getY( void ) const;
};

#endif
