
#include "StringConverter.hpp"

StringConverter::StringConverter( void ) {

}

StringConverter::StringConverter( std::string str ) : _str( str ) {

}

StringConverter::StringConverter( StringConverter const & target ) : _str( target._str ) {


}

StringConverter::~StringConverter( void ) {

}

StringConverter & StringConverter::operator=( StringConverter const & target ) {

	_str = target._str;
	return *this;
}

const char * StringConverter::ConversionErrorException::what( void ) const throw() {

	return "error";
}

StringConverter::operator char(void) const {


	char n = static_cast<char>( std::atoi( this->_str.c_str() ) );
	if ( errno ) {
		errno = 0;
		throw ( ConversionErrorException() );
	}
	return n;
}

StringConverter::operator int(void) const {

	int	n = std::atoi( this->_str.c_str() );
	if ( errno ) {
		errno = 0;
		throw ( ConversionErrorException() );
	}
	return n;
}

StringConverter::operator float(void) const {
	
	float n = std::atof(this->_str.c_str());
	if ( errno ) {
		errno = 0;
		throw (ConversionErrorException());
	}
	return n;
}

StringConverter::operator double(void) const {

	double n = std::strtod(this->_str.c_str(), NULL);
	if ( errno ) {
		errno = 0;
		throw (ConversionErrorException());
	}
	return n;
}

// std::ofstream & operator<<( std::ofstream &, StringConverter & );