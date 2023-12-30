/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:28:15 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/26 17:16:05 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) : _name("Default Form"), _gradeToSign(150), _gradeToExecute(150), _signed(false)
{
	return ;
}

Form::Form( std::string const name, int const sign, int const execute ) : _name(name), _gradeToSign(sign), _gradeToExecute(execute), _signed(false)
{
	if (sign > 150 || execute > 150)
		throw Form::GradeTooLowException();
	if (sign < 1 || execute < 1)
		throw Form::GradeTooHighException();
}

Form::~Form( void )
{
	return ;
}

Form::Form(Form const &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _signed(other._signed)
{
	return ;
}

Form &Form::operator=(Form const &other)
{
	if (this != &other)
		this->_signed = other._signed;
	return *this;
}

std::string const&	Form::getName( void ) const
{
	return this->_name;
}

int					Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int					Form::getGradeToExecute( void ) const
{
	return this->_gradeToExecute;
}

bool				Form::getSigned( void ) const
{
	return this->_signed;
}

void	Form::beSigned( Bureaucrat const& bureaucrat )
{
	std::cout << bureaucrat.getName() << " tries to sign [" << this->getName() << "] ==> ";
	if (this->_signed == true )
	{
		std::cout << bureaucrat.getName() << " cannot sign [" << this->getName()
			<< "] because ";
		throw Form::AlreadySignedException();
	}
	if ( this->_gradeToSign < bureaucrat.getGrade() )
	{
		std::cout << bureaucrat.getName() << " cannot sign [" << this->getName()
			<< "] because ";
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signs [" << this->getName() << "]" << std::endl;
	}
}

void		Form::execute( Bureaucrat const& executor ) const
{
	std::cout << executor.getName() << " tries to execute [" << this->getName() << "] ==> ";
	if (this->_signed == 0)
		throw Form::FormNotSigned();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << " Success" << std::endl;
	executeSpecific();
}

std::ostream&	operator<<( std::ostream& out, Form const& src)
{
	out << "[" << src.getName() << "] needs grade " << src.getGradeToSign()
		<< " to sign and grade " << src.getGradeToExecute() << " to execute";
	return out;
}
