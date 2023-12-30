/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:24:06 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:15:48 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		bool				_signed;

	protected:
		Form( void );

	public:
		Form( std::string const name, int const sign, int const execute );
		virtual ~Form( void );
		Form(Form const &other);
		Form &operator=(Form const &other);

		std::string const&	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getSigned( void ) const;
		void				beSigned( Bureaucrat const &bureaucrat );
		void				execute( Bureaucrat const& executor ) const;
		virtual void		executeSpecific( void ) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is too high";
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is too low";
				}
		};
		class	AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "it has already been signed";
				}
		};
		class	FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form hasn't been signed";
				}
		};
};

std::ostream&	operator<<( std::ostream& out, Form const& src );

#endif
