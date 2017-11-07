
#ifndef STRINGCONVERTER_HPP
# define STRINGCONVERTER_HPP

#include <iostream>

class StringConverter
{
public:
	StringConverter( std::string str );
	StringConverter( StringConverter const & );
	~StringConverter( void );

	StringConverter & operator=( StringConverter const & );

	class ConversionErrorException : public std::exception
	{
	public:

		const char * what( void ) const throw();		
	};

	operator char( void ) const;
	operator int( void ) const;
	operator float( void ) const;
	operator double( void ) const;
private:

	std::string _str;

	StringConverter( void );
};

// std::ofstream & operator<<( std::ofstream &, StringConverter & );

#endif
