/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 01:37:57 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:11:56 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( std::string const name, int grade) : _name(name)
{
	if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

std::string const&	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void				Bureaucrat::incrementGrade( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void				Bureaucrat::decrementGrade( void )
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void				Bureaucrat::signForm( Form& form )
{
	form.beSigned(*this);
}

void				Bureaucrat::executeForm( Form const& form )
{
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
	form.execute(*this);
}

std::ostream&	operator<<( std::ostream& out, Bureaucrat const &src )
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}
