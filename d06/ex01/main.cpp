
#include <iostream>

#include "Serialization.hpp"

int main( void ) {

	srand( time( NULL ) );

	Data * data = deserialize( serialize() );

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n:  " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	return 0;
}