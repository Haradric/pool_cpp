
#include "Array.tpp"

int main( void ) {

	Array<int> x( 10 );
	Array<float> y( 5 );

	for ( int i = 0; i < 10; i++ )
		x[i] = i;

	for ( int i = 0; i < 10; i++ )
		x[i] = i + 0.1;

	try {
		std::cout << x[10] << std::endl;
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}
