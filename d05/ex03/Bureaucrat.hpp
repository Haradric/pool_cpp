
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:

	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & );
	~Bureaucrat( void );

	Bureaucrat & operator=( Bureaucrat const & );

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
	int getGrade( void ) const;
	void incrementGrade( void );
	void decrementGrade( void );

	void executeForm( Form const & form );

private:

	std::string const _name;
	int _grade;

protected:

	Bureaucrat( void );

};

std::ostream & operator<<( std::ostream &, Bureaucrat const & );

#endif
