
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
public:

	Form( std::string name, int signlvl, int execlvl );
	Form( Form const & );
	~Form( void );

	Form & operator=( Form const & );

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what( void ) const throw();
	};

	std::string getName( void ) const;
	bool getSigned( void ) const;
	int getSignlvl( void ) const;
	int getExeclvl( void ) const;

	void beSigned( Bureaucrat const & );

private:

	Form( void );

	std::string const _name;
	bool _signed;
	int	const _signlvl;
	int const _execlvl;
	
};

std::ostream & operator<<( std::ostream &, Form const & );

#endif
