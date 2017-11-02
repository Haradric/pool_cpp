
#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:

	Fixed( void );
	Fixed( int const n );
	Fixed( float const f );
	Fixed( Fixed const & src );
	~Fixed( void );

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed & operator=( Fixed const & rhs );
	int getRawBits( void ) const;

private:

	int		_n;
	static const int _bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
