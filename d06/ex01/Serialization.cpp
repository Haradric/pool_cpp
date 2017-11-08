
#include "Serialization.hpp"

void * serialize( void ) {

	std::string const a("1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	char * raw = new char[20];

	for( int i = 0; i < 20; i++ )
		raw[i] = a[rand() % ( a.length() - 1 )];
	
	*reinterpret_cast<int *>( &raw[8] ) = rand();

	return raw;
}

Data * deserialize( void * raw ) {

	Data * data = new Data();

	data->s1.assign( reinterpret_cast<char *>( raw ), 8 );
	data->n = *reinterpret_cast<int *>( &reinterpret_cast<char *>( raw )[8] );
	data->s2.assign( &reinterpret_cast<char *>( raw )[12], 8 );

	return data;
}