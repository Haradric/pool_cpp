
#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );
	
	Fixed & operator=( Fixed const & rhs );
	int getRawBits( void ) const ;

private:

	int		_n;
	static const int _bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
