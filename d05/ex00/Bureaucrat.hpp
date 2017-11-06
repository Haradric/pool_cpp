
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define MAX_GRD 1
# define MIN_GRD 150

# include <iostream>

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

private:

	Bureaucrat( void );

	std::string const _name;
	int _grade;
	
};

std::ostream & operator<<( std::ostream &, Bureaucrat const & );

#endif
