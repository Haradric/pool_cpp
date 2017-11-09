
#include <vector>
#include <iostream>

#include "easyfind.hpp"

int main( void ) {

	std::vector<int> a;
	for ( int i = 0; i < 5; ++i )
		a.push_back( i );
	
	try {
		int pos = std::distance( a.begin(), easyfind( a, 3 ) );
		std::cout << pos << std::endl;
	}
	catch( std::exception & e ) {
		std::cout << "not found" << std::endl;
	}
}