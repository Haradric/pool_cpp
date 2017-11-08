
#include <iostream>

#include "StringConverter.hpp"

int main( int argc, char ** argv ) {

	if ( argc != 2 )
		return 0;

	StringConverter conv( argv[1] );

	std::cout << "char: ";
	try {
		char c = static_cast<char>( conv );
		if (isprint( c ))
			std::cout << "\'" << c << "\'";
		else
			std::cout << "Not displayable";
	}
	catch( std::exception &e )
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "int: ";
	try {
		int i = static_cast<int>( conv );
		std::cout << i;
	}
	catch( std::exception &e )
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "float: ";
	try {
		float f = static_cast<float>( conv );
		if ( !( f - static_cast<long int>( f ) ) )
			std::cout << f << ".0f";
		else
			std::cout << f << "f";
	}
	catch( std::exception &e )
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try {
		double d = static_cast<double>( conv );
		if ( !( d - static_cast<long long int>( d ) ) )
			std::cout << d << ".0";
		else
			std::cout << d;
	}
	catch( std::exception &e )
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	return 0;
}