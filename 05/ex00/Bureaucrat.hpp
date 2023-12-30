#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string const name, int grade);
		virtual ~Bureaucrat( void );
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);

		std::string const&	getName( void ) const;
		int const&			getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade reached the maximum possible value";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return "Grade reached the minimum possible value";
				}
		};
};

std::ostream&	operator<<( std::ostream& out, Bureaucrat const &src );

#endif
