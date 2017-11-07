
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"

class Intern
{
public:
	
	Intern( void );
	Intern( Intern const & );
	~Intern( void );

	Intern & operator=( Intern const & );

	class unknownType : public std::exception
	{
	public:
		const char* what( void ) const throw();
	};

	Form * makeForm( std::string s1, std::string s2 );

};

#endif
