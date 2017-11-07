
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
		std::cout << f << "f";
	}
	catch( std::exception &e )
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try {
		double f = static_cast<double>( conv );
		std::cout << f;
	}
	catch( std::exception &e )
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	return 0;
}