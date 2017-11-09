
#include <iostream>

template< typename T >
void iter( T * arr, size_t len, void ( * f )( T const &) )
{
	for ( size_t i = 0; i < len; i++ )
		f( arr[i] );
}

template< typename T >
void print( T const & x ) {

	std::cout << x << std::endl;
}

int main( void ) {

	int a[] = { 4, 8, 15, 16, 23, 42 };
	float b[] = { 4.2, 8.2, 15.2, 16.2, 23.2, 42.2 };

	iter<int>( a, 6, print);
	std::cout << std::endl;
	iter<float>( b, 6, print);
}
