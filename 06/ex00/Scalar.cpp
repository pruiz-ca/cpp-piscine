/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:56:33 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/18 19:13:14 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar( void )
{
	return ;
}

Scalar::Scalar( std::string const argv )
{
	this->_value = argv;
}

Scalar::~Scalar( void )
{
	return ;
}

Scalar::Scalar( Scalar const &other )
{
	*this = other;
}

Scalar &Scalar::operator=( Scalar const &other )
{
	if (this != &other)
		this->_value = other._value;
	return *this;
}

void	Scalar::toChar( void )
{
	char	c;

	try
	{
		c = static_cast<char>(std::stoi(this->_value));
		if ( c < 32 || c > 126 )
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c << "'" << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "char: impossible" << std::endl;
	}
	catch (const std::out_of_range & e)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
}

void	Scalar::toInt( void )
{
	int		i;

	try
	{
		i = static_cast<int>(std::stoi(this->_value));
		std::cout << "int: " << i << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	catch (const std::out_of_range & e)
	{
		std::cout << "int: Out of range" << std::endl;
	}
}

void	Scalar::toFloat( void )
{
	float	f;

	try
	{
		f = static_cast<float>(std::stof(this->_value));
		if (f == static_cast<int>(f))
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "float: nanf" << std::endl;
	}
	catch (const std::out_of_range & e)
	{
		std::cout << "float: Out of range" << std::endl;
	}
}

void	Scalar::toDouble( void )
{
	double	d;

	try
	{
		d = static_cast<double>(std::stod(this->_value));
		if (d == static_cast<int>(d))
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "double: nan" << std::endl;
	}
	catch (const std::out_of_range & e)
	{
		std::cout << "double: Out of range" << std::endl;
	}
}
