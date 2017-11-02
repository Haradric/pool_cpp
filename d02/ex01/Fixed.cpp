
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0) {

	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const n ) {

	this->_n = n * ( 1 << this->_bits );
}

Fixed::Fixed( float const f ) {

	this->_n = roundf(f * ( float )( 1 << this->_bits ));
}

Fixed::Fixed( Fixed const & src ) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

float Fixed::toFloat( void ) const {

	return this->_n / ( float )( 1 << this->_bits );
}

int Fixed::toInt( void ) const {

	return this->_n / ( 1 << this->_bits );
}

Fixed::~Fixed( void ) {

	// std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	// std::cout << "Assignation operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat();
	return o;
}
