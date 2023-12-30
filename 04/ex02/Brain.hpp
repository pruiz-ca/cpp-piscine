/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:45:46 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/24 20:37:13 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
		std::string		_ideas[100];

	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain &src );
		Brain&	operator=( Brain const &src );

		std::string		getIdea( int i ) const;
		void			setIdea( int i, std::string const idea );
};

#endif
