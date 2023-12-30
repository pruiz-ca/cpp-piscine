/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:44:48 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/17 11:45:57 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form*	makeshrub( std::string target );
		Form*	makerobotomy( std::string target );
		Form*	makepardon( std::string target );

	public:
		Intern( void );
		virtual ~Intern( void );
		Intern(Intern const &other);
		Intern &operator=(Intern const &other);

		Form*	makeForm( std::string form, std::string target );

		typedef Form* (Intern::*fpointer)( std::string target );
};

#endif
