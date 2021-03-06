
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
	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;
	
	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;

	Fixed & operator++( void );
	Fixed operator++( int rhs );
	Fixed & operator--( void );
	Fixed operator--( int rhs );

	static Fixed & min( Fixed & f1, Fixed & f2);
	static Fixed const & min( Fixed const & f1, Fixed const & f2);
	static Fixed & max( Fixed & f1, Fixed & f2);
	static Fixed const & max( Fixed const & f1, Fixed const & f2);

	int getRawBits( void ) const;

private:

	int		_n;
	static const int _bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
